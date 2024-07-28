---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/Math/power.md
    document_title: "\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5\uFF08\u3079\u304D\u4E57\
      \uFF09"
    links: []
  bundledCode: "#line 1 \"lib/Math/power.hpp\"\n\n\n\n/**\n * @brief \u7E70\u308A\u8FD4\
    \u3057\u4E8C\u4E57\u6CD5\uFF08\u3079\u304D\u4E57\uFF09\n * @docs docs/Math/power.md\n\
    \ */\n\n#include <cassert>\n\nnamespace algorithm {\n\n// \u7E70\u308A\u8FD4\u3057\
    \u4E8C\u4E57\u6CD5\uFF0EO(logK).\nlong long ipow(long long n, long long k) {\n\
    \    assert(k >= 0);\n    if(k == 0) return 1;\n    long long &&res = ipow(n *\
    \ n, k >> 1);\n    if(k & 1LL) res *= n;\n    return res;\n}\n\n}  // namespace\
    \ algorithm\n\n\n"
  code: "#ifndef ALGORITHM_POWER_HPP\n#define ALGORITHM_POWER_HPP 1\n\n/**\n * @brief\
    \ \u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5\uFF08\u3079\u304D\u4E57\uFF09\n *\
    \ @docs docs/Math/power.md\n */\n\n#include <cassert>\n\nnamespace algorithm {\n\
    \n// \u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5\uFF0EO(logK).\nlong long ipow(long\
    \ long n, long long k) {\n    assert(k >= 0);\n    if(k == 0) return 1;\n    long\
    \ long &&res = ipow(n * n, k >> 1);\n    if(k & 1LL) res *= n;\n    return res;\n\
    }\n\n}  // namespace algorithm\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: lib/Math/power.hpp
  requiredBy: []
  timestamp: '2024-07-28 23:50:32+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/Math/power.hpp
layout: document
redirect_from:
- /library/lib/Math/power.hpp
- /library/lib/Math/power.hpp.html
title: "\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5\uFF08\u3079\u304D\u4E57\uFF09"
---
# 概要

整数 $n, k$ に対し，$n^k$ を求める．

実装は「繰り返し二乗法（バイナリ法）」を利用しており，計算量は $\mathcal{O}(\log k)$ となる．
