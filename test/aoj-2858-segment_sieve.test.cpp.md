---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: lib/Math/NumberTheory/is_prime.hpp
    title: "\u7D20\u6570\u5224\u5B9A"
  - icon: ':heavy_check_mark:'
    path: lib/Math/NumberTheory/segment_sieve.hpp
    title: "\u533A\u9593\u7BE9"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/2858
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/2858
  bundledCode: "#line 1 \"test/aoj-2858-segment_sieve.test.cpp\"\n#define PROBLEM\
    \ \"https://onlinejudge.u-aizu.ac.jp/problems/2858\"\n\n#include <iostream>\n\n\
    #line 1 \"lib/Math/NumberTheory/is_prime.hpp\"\n\n\n\n/**\n * @brief \u7D20\u6570\
    \u5224\u5B9A\n * @docs docs/Math/NumberTheory/is_prime.md\n */\n\n#include <cassert>\n\
    \nnamespace algorithm {\n\n// \u7D20\u6570\u5224\u5B9A\uFF0EO(\u221AN).\ntemplate\
    \ <typename Type>\nbool is_prime(Type n) {\n    assert(n >= 0);\n    if(n < 2)\
    \ return false;\n    if(n == 2) return true;\n    if(n % 2 == 0) return false;\n\
    \    for(Type p = 3; p * p <= n; p += 2) {\n        if(n % p == 0) return false;\n\
    \    }\n    return true;\n}\n\n}  // namespace algorithm\n\n\n#line 1 \"lib/Math/NumberTheory/segment_sieve.hpp\"\
    \n\n\n\n/**\n * @brief \u533A\u9593\u7BE9\n * @docs docs/Math/NumberTheory/segment_sieve.md\n\
    \ */\n\n#include <algorithm>\n#line 11 \"lib/Math/NumberTheory/segment_sieve.hpp\"\
    \n#include <cmath>\n#include <map>\n#include <numeric>\n#include <vector>\n\n\
    namespace algorithm {\n\n// \u533A\u9593\u7BE9\uFF0E\nclass SegmentSieve {\n \
    \   long long m_l, m_r;\n    long long m_sr;                                 \
    \ // m_sr:=\u221Ar.\n    std::vector<long long> m_small;                  // m_small[n]:=(\u533A\
    \u9593[2,\u221Ar)\u306E\u81EA\u7136\u6570n\u306B\u304A\u3051\u308B\u6700\u5C0F\
    \u306E\u7D20\u56E0\u6570).\n    std::vector<std::map<long long, int> > m_large;\
    \  // m_large[n-l][]:=(\u533A\u9593[l,r)\u306E\u81EA\u7136\u6570n\u306B\u304A\u3051\
    \u308B\u533A\u9593[2,\u221Ar)\u306E\u3044\u304F\u3064\u304B\u306E\u7D20\u56E0\u6570\
    ).\n    std::vector<long long> m_aux;                    // m_aux[n-l]:=(m_large[n-l][]\u306E\
    \u7A4D).\n\npublic:\n    // constructor. \u533A\u9593[l,r)\u306E\u81EA\u7136\u6570\
    \u3092\u7BE9\u306B\u304B\u3051\u308B\uFF0E\u5236\u7D04\u306E\u76EE\u5B89\u306F\
    \u304A\u304A\u3088\u305D 2<=l<r<=1e12, r-l<=1e6\uFF0E\n    SegmentSieve() : SegmentSieve(2,\
    \ 3) {}\n    explicit SegmentSieve(long long l, long long r) : m_l(l), m_r(r),\
    \ m_large(r - l), m_aux(r - l, 1) {\n        assert(2 <= l and l < r);\n     \
    \   m_sr = std::sqrt(m_r) + 1;\n        m_small.assign(m_sr, -1);\n        std::iota(m_small.begin()\
    \ + 2, m_small.end(), 2);\n        for(long long p = 2; p * p < m_r; ++p) {\n\
    \            if(m_small[p] == p) {\n                for(long long q = p * p; q\
    \ < m_sr; q += p) m_small[q] = p;\n                for(long long q = std::max<long\
    \ long>((m_l + p - 1) / p, 2) * p; q < m_r; q += p) {\n                    long\
    \ long tmp = q;\n                    while(tmp % p == 0 and m_aux[q - m_l] * m_aux[q\
    \ - m_l] < m_r) {\n                        m_large[q - m_l][p]++;\n          \
    \              m_aux[q - m_l] *= p;\n                        tmp /= p;\n     \
    \               }\n                }\n            }\n        }\n    }\n\n    //\
    \ \u7D20\u6570\u5224\u5B9A\uFF0EO(1).\n    bool is_prime(long long n) const {\n\
    \        assert(m_l <= n and n < m_r);\n        return m_large[n - m_l].size()\
    \ == 0;\n    }\n    // \u9AD8\u901F\u7D20\u56E0\u6570\u5206\u89E3\uFF0E\n    std::map<long\
    \ long, int> prime_factorize(long long n) const {\n        assert(m_l <= n and\
    \ n < m_r);\n        std::map<long long, int> res = m_large[n - m_l];\n      \
    \  n /= m_aux[n - m_l];\n        if(n >= m_sr) {\n            res[n]++;\n    \
    \        return res;\n        }\n        while(n > 1) {\n            res[m_small[n]]++;\n\
    \            n /= m_small[n];\n        }\n        return res;\n    }\n    // \u9AD8\
    \u901F\u7D04\u6570\u5217\u6319\uFF0E\n    std::vector<long long> divisors(long\
    \ long n) const {\n        assert(m_l <= n and n < m_r);\n        std::vector<long\
    \ long> res({1});\n        const std::map<long long, int> &&pf = prime_factorize(n);\n\
    \        int capacity = 1;\n        for(const auto &[_, cnt] : pf) capacity *=\
    \ (cnt + 1);\n        res.reserve(capacity);\n        for(const auto &[p, cnt]\
    \ : pf) {\n            const int sz = res.size();\n            long long b = 1;\n\
    \            for(int i = 0; i < cnt; ++i) {\n                b *= p;\n       \
    \         for(int j = 0; j < sz; ++j) res.push_back(res[j] * b);\n           \
    \ }\n        }\n        std::sort(res.begin(), res.end());\n        return res;\n\
    \    }\n};\n\n}  // namespace algorithm\n\n\n#line 7 \"test/aoj-2858-segment_sieve.test.cpp\"\
    \n\nint main() {\n    int l, r;\n    std::cin >> l >> r;\n\n    if(l == 1) {\n\
    \        if(r == 1) {\n            std::cout << 0 << std::endl;\n            return\
    \ 0;\n        }\n        l = 2;\n    }\n\n    int ans = 0;\n    algorithm::SegmentSieve\
    \ segment_sieve(l, r + 1);\n    for(int i = l; i <= r; ++i) {\n        const auto\
    \ &&pf = segment_sieve.prime_factorize(i);\n\n        int cnt = 0;\n        for(const\
    \ auto &[_, elem] : pf) cnt += elem;\n\n        if(algorithm::is_prime(cnt)) ans++;\n\
    \    }\n\n    std::cout << ans << std::endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/2858\"\n\n#include\
    \ <iostream>\n\n#include \"../lib/Math/NumberTheory/is_prime.hpp\"\n#include \"\
    ../lib/Math/NumberTheory/segment_sieve.hpp\"\n\nint main() {\n    int l, r;\n\
    \    std::cin >> l >> r;\n\n    if(l == 1) {\n        if(r == 1) {\n         \
    \   std::cout << 0 << std::endl;\n            return 0;\n        }\n        l\
    \ = 2;\n    }\n\n    int ans = 0;\n    algorithm::SegmentSieve segment_sieve(l,\
    \ r + 1);\n    for(int i = l; i <= r; ++i) {\n        const auto &&pf = segment_sieve.prime_factorize(i);\n\
    \n        int cnt = 0;\n        for(const auto &[_, elem] : pf) cnt += elem;\n\
    \n        if(algorithm::is_prime(cnt)) ans++;\n    }\n\n    std::cout << ans <<\
    \ std::endl;\n}\n"
  dependsOn:
  - lib/Math/NumberTheory/is_prime.hpp
  - lib/Math/NumberTheory/segment_sieve.hpp
  isVerificationFile: true
  path: test/aoj-2858-segment_sieve.test.cpp
  requiredBy: []
  timestamp: '2024-07-28 23:50:32+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-2858-segment_sieve.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-2858-segment_sieve.test.cpp
- /verify/test/aoj-2858-segment_sieve.test.cpp.html
title: test/aoj-2858-segment_sieve.test.cpp
---
