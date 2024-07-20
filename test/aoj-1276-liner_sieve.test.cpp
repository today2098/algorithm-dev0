#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/challenges/sources/ICPC/Regional/1276"

#include <algorithm>
#include <iostream>
#include <iterator>

#include "../lib/Math/NumberTheory/liner_sieve.hpp"

int main() {
    constexpr int mx = 1299709;
    algorithm::LinearSieve sieve(mx);

    const auto &primes = sieve.primes();
    while(true) {
        int a;
        std::cin >> a;
        if(a == 0) break;

        auto itr = std::lower_bound(primes.cbegin(), primes.cend(), a);
        if(*itr == a) std::cout << 0 << "\n";
        else std::cout << *itr - *std::prev(itr) << "\n";
    }
}
