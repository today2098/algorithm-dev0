---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/Math/square_root.md
    document_title: "\u30CB\u30E5\u30FC\u30C8\u30F3\u6CD5\uFF08\u5E73\u65B9\u6839\uFF09"
    links: []
  bundledCode: "#line 1 \"lib/Math/square_root.hpp\"\n\n\n\n/**\n * @brief \u30CB\u30E5\
    \u30FC\u30C8\u30F3\u6CD5\uFF08\u5E73\u65B9\u6839\uFF09\n * @docs docs/Math/square_root.md\n\
    \ */\n\n#include <cassert>\n#include <cmath>\n\nnamespace algorithm {\n\n// \u30CB\
    \u30E5\u30FC\u30C8\u30F3\u6CD5\uFF08\u5E73\u65B9\u6839\uFF09\uFF0E\ndouble isqrt(double\
    \ x, const double eps = 1e-10) {\n    assert(x >= 0.0);\n    double res = 5.0;\n\
    \    while(1) {\n        double tmp = (x / res + res) / 2;\n        if(std::abs(tmp\
    \ - res) < eps) break;\n        res = tmp;\n    }\n    return res;\n}\n\n}  //\
    \ namespace algorithm\n\n\n"
  code: "#ifndef ALGORITHM_SQUARE_ROOT_HPP\n#define ALGORITHM_SQUARE_ROOT_HPP 1\n\n\
    /**\n * @brief \u30CB\u30E5\u30FC\u30C8\u30F3\u6CD5\uFF08\u5E73\u65B9\u6839\uFF09\
    \n * @docs docs/Math/square_root.md\n */\n\n#include <cassert>\n#include <cmath>\n\
    \nnamespace algorithm {\n\n// \u30CB\u30E5\u30FC\u30C8\u30F3\u6CD5\uFF08\u5E73\
    \u65B9\u6839\uFF09\uFF0E\ndouble isqrt(double x, const double eps = 1e-10) {\n\
    \    assert(x >= 0.0);\n    double res = 5.0;\n    while(1) {\n        double\
    \ tmp = (x / res + res) / 2;\n        if(std::abs(tmp - res) < eps) break;\n \
    \       res = tmp;\n    }\n    return res;\n}\n\n}  // namespace algorithm\n\n\
    #endif\n"
  dependsOn: []
  isVerificationFile: false
  path: lib/Math/square_root.hpp
  requiredBy: []
  timestamp: '2024-07-28 23:50:32+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/Math/square_root.hpp
layout: document
redirect_from:
- /library/lib/Math/square_root.hpp
- /library/lib/Math/square_root.hpp.html
title: "\u30CB\u30E5\u30FC\u30C8\u30F3\u6CD5\uFF08\u5E73\u65B9\u6839\uFF09"
---
## 概要

正の実数値 $x$ の平方根 $\sqrt x$ を求める．

実装では「ニュートン法 (Newton's method)」を用いている．


## 参考文献

1. 長谷川武光, 吉田俊之, 細田陽介. "4.3 ニュートン法". 工学のための数値計算. 数理工学社, 2008 p.62-64.
1. "ニュートン法". Wikipedia. <https://ja.wikipedia.org/wiki/ニュートン法>.
