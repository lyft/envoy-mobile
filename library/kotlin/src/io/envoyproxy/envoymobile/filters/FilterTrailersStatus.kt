package io.envoyproxy.envoymobile

/*
 * Status returned by filters when transmitting or receiving trailers.
 */
sealed class FilterTrailersStatus<T : Headers, U : Headers> {
  /**
   * Continue filter chain iteration, passing the provided trailers through.
   */
  class Continue<T : Headers>(val trailers: T) : FilterTrailersStatus<T, U>()

  /**
   * Do not iterate to any of the remaining filters in the chain with trailers.
   *
   * Calling `continueRequest()`/`continueResponse()` MUST occur when continued filter iteration
   * is desired.
   */
  class StopIteration : FilterTrailersStatus<T, U>()

  /**
   * Resume previously-stopped iteration, possibly forwarding headers and data, if iteration was
   * previously stopped during an on*Headers or on*Data invocation.
   *
   * It is an error to return ResumeIteration if iteration is not currently stopped, and it is
   * an error to include headers if headers have already been forwarded to the next filter
   * (i.e. iteration was stopped during an on*Data invocation instead of on*Headers).
   */
  class ResumeIteration<T : Headers>(val headers: T?, val data: ByteBuffer?, val trailers: U?) : FilterTrailersStatus<T, U>()
}
