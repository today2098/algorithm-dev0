---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: lib/Math/NumberTheory/prime_factorize.hpp
    title: "\u7D20\u56E0\u6570\u5206\u89E3"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
  bundledCode: "#line 1 \"test/aoj-NTL_1_A-prime_factorize.test.cpp\"\n#define PROBLEM\
    \ \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\n\n#include\
    \ <iostream>\n\n#line 1 \"lib/Math/NumberTheory/prime_factorize.hpp\"\n\n\n\n\
    /**\n * @brief \u7D20\u56E0\u6570\u5206\u89E3\n * @docs docs/Math/NumberTheory/prime_factorize.md\n\
    \ */\n\n#include <cassert>\n#include <map>\n\nnamespace algorithm {\n\n// \u7D20\
    \u56E0\u6570\u5206\u89E3\uFF0EO(\u221AN).\ntemplate <typename Type>\nstd::map<Type,\
    \ int> prime_factorize(Type n) {\n    assert(n >= 0);\n    std::map<Type, int>\
    \ res;  // res[p]:=(\u81EA\u7136\u6570n\u306B\u542B\u307E\u308C\u308B\u7D20\u56E0\
    \u6570p\u306E\u500B\u6570).\n    while(n % 2 == 0) res[2]++, n /= 2;\n    for(Type\
    \ p = 3; p * p <= n; p += 2) {\n        while(n % p == 0) res[p]++, n /= p;\n\
    \    }\n    if(n > 1) res[n] = 1;\n    return res;\n}\n\n}  // namespace algorithm\n\
    \n\n#line 6 \"test/aoj-NTL_1_A-prime_factorize.test.cpp\"\n\nint main() {\n  \
    \  int n;\n    std::cin >> n;\n\n    const auto &&pf = algorithm::prime_factorize(n);\n\
    \n    std::cout << n << \":\";\n    for(const auto &[p, cnt] : pf) {\n       \
    \ for(int i = 0; i < cnt; ++i) std::cout << \" \" << p;\n    }\n    std::cout\
    \ << std::endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\
    \n\n#include <iostream>\n\n#include \"../lib/Math/NumberTheory/prime_factorize.hpp\"\
    \n\nint main() {\n    int n;\n    std::cin >> n;\n\n    const auto &&pf = algorithm::prime_factorize(n);\n\
    \n    std::cout << n << \":\";\n    for(const auto &[p, cnt] : pf) {\n       \
    \ for(int i = 0; i < cnt; ++i) std::cout << \" \" << p;\n    }\n    std::cout\
    \ << std::endl;\n}\n"
  dependsOn:
  - lib/Math/NumberTheory/prime_factorize.hpp
  isVerificationFile: true
  path: test/aoj-NTL_1_A-prime_factorize.test.cpp
  requiredBy: []
  timestamp: '2024-07-28 23:50:32+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-NTL_1_A-prime_factorize.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-NTL_1_A-prime_factorize.test.cpp
- /verify/test/aoj-NTL_1_A-prime_factorize.test.cpp.html
title: test/aoj-NTL_1_A-prime_factorize.test.cpp
---
