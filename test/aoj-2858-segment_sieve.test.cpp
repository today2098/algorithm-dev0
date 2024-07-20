#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/2858"

#include <iostream>

#include "../lib/Math/NumberTheory/is_prime.hpp"
#include "../lib/Math/NumberTheory/segment_sieve.hpp"

int main() {
    int l, r;
    std::cin >> l >> r;

    if(l == 1) {
        if(r == 1) {
            std::cout << 0 << std::endl;
            return 0;
        }
        l = 2;
    }

    int ans = 0;
    algorithm::SegmentSieve segment_sieve(l, r + 1);
    for(int i = l; i <= r; ++i) {
        const auto &&pf = segment_sieve.prime_factorize(i);

        int cnt = 0;
        for(const auto &[_, elem] : pf) cnt += elem;

        if(algorithm::is_prime(cnt)) ans++;
    }

    std::cout << ans << std::endl;
}
