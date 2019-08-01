#import "library/objective-c/EnvoyEngine.h"
#import "library/objective-c/EnvoyTypes.h"

#import "library/common/include/c_types.h"
#import "library/common/main_interface.h"

#pragma mark - utility functions to move elsewhere
static envoy_headers toNativeHeaders(EnvoyHeaders *headers) {
  int length = 0;
  for (id headerList in headers) {
    length += headerList.count;
  }
  envoy_header *header_array = (envoy_header *)malloc(sizeof(envoy_header) * length);
  int j = 0;
  for (id headerKey in headers) {
    NSArray *headerList = headers[headerKey];
    for (id headerValue in headerList) {
      header_array[j++] = {
        toManagedNativeString(headerKey),
        toManagedNativeString(headerValue)
      };
    }
  }
  return { length, header_array };
}



static envoy_data toUnmanagedNativeData(NSData *data) {
  // TODO: implement me
}

static envoy_data toManagedNativeString(NSString *s) {
  int length = s.length;
  char *native_string = (char *)malloc(sizeof(char) * length);
  memcpy(s.UTF8String, native_string, length)
  return {length, native_string, ios_free_native_data, native_string};
}

static void ios_free_native_data(void *context) {
  free(context);
}

static void ios_release_native_data(void *context) {
  // TODO: implement me
}

static NSData * to_ios_data(envoy_data data) {
  // TODO: investigate buffer ownership
  // Possibly extend/subclass NSData to call envoy_data.release on dealloc and have release drain the underlying Envoy buffer instance
  // FIXME: do we need to autorlease here?
  return [[NSData dataWithBytesNoCopy:data.bytes length:data.length] autorelease];
}

static EnvoyHeaders * to_ios_headers(envoy_headers headers) {
  NSMutableDictianary *headerDict = [NSMutableDictionary new];
  for (uint_fast32_t i = 0; i < headers.length; i++) {
    envoy_header header = headers.headers[i];
    NSString *headerKey = [[NSString alloc] initWithBytes:header.key.bytes
                                                   length:header.key.length
                                                 encoding:NSUTF8StringEncoding];
    NSString *headerValue = [[NSString alloc] initWithBytes:header.value.bytes 
                                                     length:header.value.length
                                                   encoding:NSUTF8StringEncoding];
    NSMutableArray *headerValueList = headerDict[headerName];
    if (headerValueList == nil) {
      headerValueList = [NSMutableArray new];
      headerDict[headerKey] = headerValueList;
    }
    [headerValueList addObject:headerValue];
  }
  return [headerDict autorelease];
}

#pragma mark - callbacks
static void ios_on_headers(envoy_headers headers, bool end_stream, void* context) {
  EnvoyObserver *observer = (EnvoyObserver *)context;
  dispatch_async(context.dispatchQueue, ^{
    if (atomic_load(context.canceled)) {
      return;
    }
    observer.onHeaders(to_ios_headers(headers), end_stream);
  });
}

static void ios_on_data(envoy_data data, bool end_stream, void* context) {
  EnvoyObserver *observer = (EnvoyObserver *)context;
  dispatch_async(context.dispatchQueue, ^{
    if (atomic_load(context.canceled)) {
      return;
    
    // TODO: retain data
    observer.onData(to_ios_data(data), end_stream);
  });
}

static void ios_on_metadata(envoy_headers metadata, void* context) {
  EnvoyObserver *observer = (EnvoyObserver *)context;
  dispatch_async(context.dispatchQueue, ^{
    if (atomic_load(context.canceled)) {
      return;
    }
    observer.onMetadata(to_ios_headers(metadata));
  });
}

static void ios_on_trailers(envoy_headers trailers, bool end_stream, void *context) {
  EnvoyObserver *observer = (EnvoyObserver *)context;
  dispatch_async(context.dispatchQueue, ^{
    if (atomic_load(context.canceled)) {
      return;
    }
    observer.onTrailers(to_ios_headers(trailers), end_stream);
  });
}

static void ios_on_complete(void *context) {
  EnvoyObserver *observer = (EnvoyObserver *)context;
  dispatch_async(context.dispatchQueue, ^{
    // TODO: release stream
    if (atomic_load(context.canceled)) {
      return;
    }
  });
}

static void ios_on_cancel(void *context) {
  EnvoyObserver *observer = (EnvoyObserver *)context;
  // TODO: release stream
  dispatch_async(context.dispatchQueue, ^{
    // This call is atomically gated at the call-site and will only happen once.
    observer.onCancel();
  }
}

static void ios_on_error(envoy_error error, void *context) {
  EnvoyObserver *observer = (EnvoyObserver *)context;
  dispatch_async(context.dispatchQueue, ^{
    // TODO: release stream
    if (atomic_load(context.canceled)) {
      return;
    }
    observer.on_error(to_platform_error(error));
  });
}

@implementation EnvoyEngine

#pragma mark - class methods
+ (envoy_engine_t)runWithConfig:(NSString *)config {
  return [self runWithConfig:config logLevel:@"debug"];
}

+ (envoy_engine_t)runWithConfig:(NSString *)config logLevel:(NSString *)logLevel {
  try {
    return (EnvoyStatus)run_engine(config.UTF8String, logLevel.UTF8String);
  } catch (NSException *e) {
    NSLog(@"Envoy exception: %@", e);
    NSDictionary *userInfo = @{@"exception" : e};
    [NSNotificationCenter.defaultCenter postNotificationName:@"EnvoyException"
                                                      object:self
                                                    userInfo:userInfo];
    return Failure;
  }
}

+ (void)setupEnvoy {
  setup_envoy();
}

// TODO: move to Envoy
+ (EnvoyStream *)startHttpStreamForRequest:(EnvoyRequest *)request handler:(EnvoyObserver *)handler {
  EnvoyStream *stream = [[EnvoyStream alloc] initWithEngine:engine,
                                                    request:request,
                                                   observer:handler];
}

@end

@implementation EnvoyHttpStream

@property (nonatomic, strong) __typeof__(self) strongSelf;
@property (nonatomic, strong) EnvoyObserver *platformObserver;
@property (nonatomic, assign) envoy_observer *nativeObserver;
@property (nonatomic, assign) envoy_stream_t nativeStream;

- (instancetype)initWithObserver:(EnvoyObserver *)observer {
  self = [super init];
  if (!self) {
    return nil;
  }

  self.platformObserver = observer;
  envoy_observer *native_obs = (envoy_observer *)malloc(sizeof(envoy_observer));  

  atomic_bool *canceled = (atomic_bool *)malloc(sizeof(atomic_bool));
  atomic_store(canceled, false);

  envoy_observer native_init = {
    ios_on_headers,
    ios_on_data,
    ios_on_trailers,
    ios_on_metadata,
    ios_on_complete,
    ios_on_error,
    canceled,
    observer
  };
  memcpy(native_obs, &native_init, sizeof(envoy_observer));

  self.nativeObserver = native_obs;
  envoy_stream result = start_stream(native_obs);
  if (result.status != ENVOY_SUCCESS) {
    return nil;
  }

  self.nativeStream = result.stream;
  self.strongSelf = self;
  return self;
}

- (void)dealloc {
  free(self.nativeObserver);
}

- (void)sendHeaders:(EnvoyHeaders *)headers close:(BOOL)close {
  send_headers(self.nativeStream, toNativeHeaders(headers), end_steam:close);
}

- (void)sendData:(NSData *)data close:(BOOL)close {
  send_data(self.nativeStream, toNativeData(data), end_stream:close);
}

- (void)sendMetadata:(EnvoyHeaders *)metadata {
  send_metadata(self.nativeStream, toNativeHeaders(metadata));
}

- (void)sendTrailers:(EnvoyHeaders *)trailers {
  send_trailers(self.nativeStream, toNativeHeaders(trailers));
}

- (EnvoyStatus)cancel {
  // Step 1: atomically and synchronously prevent the execution of further callbacks other than on_cancel.
  if (!atomic_exchange(self.nativeObserver.canceled, YES)) {
    // Step 2: directly fire the cancel callback.
    ios_on_cancel(self.nativeObserver.observer);
    // Step 3: propagate the reset into native code.
    reset_stream(self.nativeStream);
    return Success;
  } else {
    return Failure;
  }
}

@end
