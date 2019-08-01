#pragma once

#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// NOLINT(namespace-envoy)

/**
 * Handle to an Envoy engine instance. Valid only for the lifetime of the engine and not intended
 * for any external interpretation or use.
 */
typedef uint64_t envoy_engine_t;

/**
 * Handle to an outstanding Envoy HTTP stream. Valid only for the duration of the stream and not
 * intended for any external interpretation or use.
 */
typedef uint64_t envoy_stream_t;

/**
 * Result codes returned by all calls made to this interface.
 */
typedef enum { ENVOY_SUCCESS, ENVOY_FAILURE } envoy_status_t;

/**
 * Error code associated with terminal status of a HTTP stream.
 */
typedef enum { ENVOY_STREAM_RESET } envoy_error_code_t;

/**
 * Callback indicating Envoy has drained the associated buffer.
 */
#ifdef __cplusplus
extern "C" { // release function
#endif
typedef void (*envoy_release_f)(void* context);

/**
 * No-op callback.
 */
static void envoy_noop_release(void *) {};

#ifdef __cplusplus
} // release function
#endif

/**
 * Holds raw binary data as an array of bytes.
 */
typedef struct {
  size_t length;
  const uint8_t* bytes;
  envoy_release_f release;
  void *context;
} envoy_data;

/**
 * Holds data about an HTTP stream.
 */
typedef struct {
  // Status of the Envoy HTTP stream. Note that the stream might have failed inline.
  // Thus the status should be checked before pursuing other operations on the stream.
  envoy_status_t status;
  // Handle to the Envoy HTTP Stream.
  envoy_stream_t stream;
} envoy_stream;

/**
 * Holds a single key/value header.
 */
typedef struct {
  envoy_data key;
  // Multiple header values for the same header key are supported via a comma-delimited string.
  envoy_data value;
} envoy_header;

/**
 * Holds an HTTP header map as an array of envoy_header structs.
 */
typedef struct {
  // Number of header elements in the array.
  int length;
  // Array of headers.
  envoy_header* headers;
  // Callback indicating may be released/free'd.
} envoy_headers;

/**
 * Helper function to free/release memory associated with underlying headers.
 */
void release_envoy_headers(envoy_headers headers) {
  for (int i = 0; i < headers.length; i++) {
    envoy_header header = headers.headers[i];
    header.key.release(header.key.context);
    header.value.release(header.value.context);
  }
  free(headers.headers);
}

// Convenience constant to pass to function calls with no data.
// For example when sending a headers-only request.
const envoy_data envoy_nodata = {0, NULL, envoy_noop_release, NULL };

/**
 * Error struct.
 */
typedef struct {
  envoy_error_code_t error_code;
  envoy_data message;
} envoy_error;

#ifdef __cplusplus
extern "C" { // function pointers
#endif
/**
 * Called when all headers get received on the async HTTP stream.
 * @param headers, the headers received.
 * @param end_stream, whether the response is headers-only.
 * @param context, contains the necessary state to carry out platform-specific dispatch and
 * execution.
 */
typedef void (*envoy_on_headers_f)(envoy_headers headers, bool end_stream, void* context);
/**
 * Called when a data frame gets received on the async HTTP stream.
 * This callback can be invoked multiple times if the data gets streamed.
 * @param data, the data received.
 * @param end_stream, whether the data is the last data frame.
 * @param context, contains the necessary state to carry out platform-specific dispatch and
 * execution.
 */
typedef void (*envoy_on_data_f)(envoy_data data, bool end_stream, void* context);
/**
 * Called when a metadata frame gets received on the async HTTP stream.
 * Note that metadata frames are prohibited from ending a stream.
 * @param metadata, the metadata received.
 * @param context, contains the necessary state to carry out platform-specific dispatch and
 * execution.
 */
typedef void (*envoy_on_metadata_f)(envoy_headers metadata, void* context);
/**
 * Called when all trailers get received on the async HTTP stream.
 * Note that end stream is implied when on_trailers is called.
 * @param trailers, the trailers received.
 * @param context, contains the necessary state to carry out platform-specific dispatch and
 * execution.
 */
typedef void (*envoy_on_trailers_f)(envoy_headers trailers, void* context);
/**
 * Called when the async HTTP stream has an error.
 * @param envoy_error, the error received/caused by the async HTTP stream.
 * @param context, contains the necessary state to carry out platform-specific dispatch and
 * execution.
 */
typedef void (*envoy_on_error_f)(envoy_error error, void* context);

#ifdef __cplusplus
} // function pointers
#endif

/**
 * Interface that can handle HTTP callbacks.
 */
typedef struct {
  envoy_on_headers_f on_headers;
  envoy_on_data_f on_data;
  envoy_on_metadata_f on_metadata;
  envoy_on_trailers_f on_trailers;
  envoy_on_error_f on_error;
  atomic_bool *canceled;
  void* context; // Will be passed through to callbacks to provide dispatch and execution state.
} envoy_observer;
