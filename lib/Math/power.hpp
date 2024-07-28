#ifndef ALGORITHM_POWER_HPP
#define ALGORITHM_POWER_HPP 1

/**
 * @brief 繰り返し二乗法（べき乗）
 * @docs docs/Math/power.md
 */

#include <cassert>

namespace algorithm {

// 繰り返し二乗法．O(logK).
long long ipow(long long n, long long k) {
    assert(k >= 0);
    if(k == 0) return 1;
    long long &&res = ipow(n * n, k >> 1);
    if(k & 1LL) res *= n;
    return res;
}

}  // namespace algorithm

#endif
