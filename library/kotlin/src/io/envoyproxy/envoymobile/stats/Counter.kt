package io.envoyproxy.envoymobile

import io.envoyproxy.envoymobile.engine.EnvoyEngine
import java.lang.ref.WeakReference

/**
 * A time series counter.
 */
class Counter internal constructor(
  private val envoyEngine: WeakReference<EnvoyEngine>,
  private val elements: List<Element>
) {

  /**
   * Increment the counter by the given count.
   */
  fun increment(count: Int = 1) {
    envoyEngine.get()?.recordCounter(
      elements.joinToString(separator = ".") { it.element }, count
    )
  }
}