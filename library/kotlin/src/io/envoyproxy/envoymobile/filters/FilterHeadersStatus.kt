package io.envoyproxy.envoymobile

/*
 * Status returned by filters when transmitting or receiving headers.
 */
sealed class FilterHeadersStatus<T : Headers> {
  /**
   * Continue filter chain iteration, passing the provided headers through.
   */
  class Continue<T : Headers>(val headers: T) : FilterHeadersStatus<T>()

  /**
   * Do not iterate to any of the remaining filters in the chain with headers.
   *
   * Returning `continue` from `onRequestData()`/`onResponseData()` or calling
   * `continueRequest()`/`continueResponse()` MUST occur when continued filter iteration is
   * desired.
   */
  class StopIteration : FilterHeadersStatus<T>()
}
