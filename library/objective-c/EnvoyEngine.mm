#import "library/objective-c/EnvoyEngine.h"

#import "library/common/include/c_types.h"
#import "library/common/main_interface.h"

@implementation EnvoyEngine

typedef struct {
  onHeaders onHeadersCallback;
  dispatch_queue_t callback_queue;
} ios_callbacks;

#pragma mark - garbage
static void platform_on_headers(envoy_headers headers, bool end_stream, void* context) {
  void (^onHeaders)(envoy_headers) = ;
  onHeaders(headers);
  if (end_stream) {
    NSLog(@"[STREAM END]");
  }
}

static void platform_on_data(envoy_data data, bool end_stream, void* context) {
  void (^onData)(envoy_data) = ;
  onData(data);
  if (end_stream) {
    NSLog(@"[STREAM END]");
  }
}

static envoy_data EnvoyString(NSString *s) { return {s.length, strdup(s.UTF8String)}; }

static void printHeaders(envoy_headers headers, bool sent) {
  for (int i = 0; i < headers.length; i++) {
    NSString *key = @(headers.headers[i].key.data);
    NSString *value = @(headers.headers[i].value.data);
    NSString *action = sent ? @"SENT" : @"RECEIVED";
    NSLog(@"[%@ HEADER] %@: %@", action, key, value);
  }
}

+ (void)makeRequest {
  NSLog(@"Inside makeRequest");
  void (^onHeaders)(envoy_headers) = ^(envoy_headers headers) {
    printHeaders(headers, false);
  };

  void (^onData)(envoy_data) = ^(envoy_data data) {
    NSLog(@"RECEIVED DATA: %llu", data.length);
  };

  envoy_observer observer = {
      platform_on_headers,
      platform_on_data,
      nullptr,
      nullptr,
  };

  NSLog(@"Calling start_stream");
  envoy_stream stream_pair = start_stream(observer);
  NSLog(@"Checking start_stream result");
  if (stream_pair.status == ENVOY_SUCCESS) {
    NSLog(@"[STREAM OPEN: %@]", @(stream_pair.stream));
    _callbacks[@(stream_pair.stream)] = onHeaders;
    _callbacks[@(stream_pair.stream)] = onData;
  } else {
    NSLog(@"[STREAM OPEN FAILED]");
  }

  envoy_header* header_array = new envoy_header[4];

  header_array [0] = {EnvoyString(@":method"), EnvoyString(@"GET")};
  header_array [1] = {EnvoyString(@":scheme"), EnvoyString(@"https")};
  header_array [2] = {EnvoyString(@":authority"), EnvoyString(@"api.lyft.com")};
  header_array [3] = {EnvoyString(@":path"), EnvoyString(@"/ping")};

  envoy_headers request_headers = {4, header_array};

  envoy_status_t status = send_headers(stream_pair.stream, request_headers, true);
  if (status == ENVOY_SUCCESS) {
    printHeaders(request_headers, true);
  } else {
    NSLog(@"[FAILED TO SEND HEADERS]");
  }
}

#pragma mark - class methods
+ (EnvoyStatus)runWithConfig:(NSString *)config {
  return [self runWithConfig:config logLevel:@"debug"];
}

+ (EnvoyStatus)runWithConfig:(NSString *)config logLevel:(NSString *)logLevel {
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

+ (EnvoyStatus)sendHeaders:(EnvoyHeaders *)headers to:(EnvoyStream *)stream close:(BOOL)close {
  NSLog(@"%@ not implemented, returning failure", NSStringFromSelector((SEL) __func__));
  return Failure;
}

+ (EnvoyStatus)sendData:(NSData *)data to:(EnvoyStream *)stream close:(BOOL)close {
  NSLog(@"%@ not implemented, returning failure", NSStringFromSelector((SEL) __func__));
  return Failure;
}

+ (EnvoyStatus)sendMetadata:(EnvoyHeaders *)metadata to:(EnvoyStream *)stream close:(BOOL)close {
  NSLog(@"%@ not implemented, returning failure", NSStringFromSelector((SEL) __func__));
  return Failure;
}

+ (EnvoyStatus)sendTrailers:(EnvoyHeaders *)trailers to:(EnvoyStream *)stream close:(BOOL)close {
  NSLog(@"%@ not implemented, returning failure", NSStringFromSelector((SEL) __func__));
  return Failure;
}

+ (EnvoyStatus)locallyCloseStream:(EnvoyStream *)stream {
  NSLog(@"%@ not implemented, returning failure", NSStringFromSelector((SEL) __func__));
  return Failure;
}

+ (EnvoyStatus)resetStream:(EnvoyStream *)stream {
  NSLog(@"%@ not implemented, returning failure", NSStringFromSelector((SEL) __func__));
  return Failure;
}

@end
