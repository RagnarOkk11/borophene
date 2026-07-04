#pragma once

#include <bit>

namespace borophene {

template <class T>
static inline T BSwapIfLE(const T& x) {
  if constexpr (std::endian::native == std::endian::little) {
    return std::byteswap(x);
  } else {
    return x;
  }
}

template <class T>
static inline T BSwapIfBE(const T& x) {
  if constexpr (std::endian::native == std::endian::big) {
    return std::byteswap(x);
  } else {
    return x;
  }
}

}  // namespace borophene
