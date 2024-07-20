---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: lib/Math/ModularArithmetic/modint.hpp
    title: "Modint\u69CB\u9020\u4F53"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj-3110-modint.test.cpp
    title: test/aoj-3110-modint.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/Math/ModularArithmetic/modint_base.md
    document_title: "Modint\u69CB\u9020\u4F53\u306E\u57FA\u5E95\u30AF\u30E9\u30B9"
    links: []
  bundledCode: "#line 1 \"lib/Math/ModularArithmetic/modint_base.hpp\"\n\n\n\n/**\n\
    \ * @brief Modint\u69CB\u9020\u4F53\u306E\u57FA\u5E95\u30AF\u30E9\u30B9\n * @docs\
    \ docs/Math/ModularArithmetic/modint_base.md\n */\n\n#include <type_traits>\n\n\
    namespace algorithm {\n\nclass ModintBase {};\n\ntemplate <class T>\nusing is_modint\
    \ = std::is_base_of<ModintBase, T>;\n\ntemplate <class T>\ninline constexpr bool\
    \ is_modint_v = is_modint<T>::value;\n\n}  // namespace algorithm\n\n\n"
  code: "#ifndef ALGORITHM_MODINT_BASE_HPP\n#define ALGORITHM_MODINT_BASE_HPP 1\n\n\
    /**\n * @brief Modint\u69CB\u9020\u4F53\u306E\u57FA\u5E95\u30AF\u30E9\u30B9\n\
    \ * @docs docs/Math/ModularArithmetic/modint_base.md\n */\n\n#include <type_traits>\n\
    \nnamespace algorithm {\n\nclass ModintBase {};\n\ntemplate <class T>\nusing is_modint\
    \ = std::is_base_of<ModintBase, T>;\n\ntemplate <class T>\ninline constexpr bool\
    \ is_modint_v = is_modint<T>::value;\n\n}  // namespace algorithm\n\n#endif\n"
  dependsOn: []
  isVerificationFile: false
  path: lib/Math/ModularArithmetic/modint_base.hpp
  requiredBy:
  - lib/Math/ModularArithmetic/modint.hpp
  timestamp: '2024-07-20 13:42:52+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj-3110-modint.test.cpp
documentation_of: lib/Math/ModularArithmetic/modint_base.hpp
layout: document
redirect_from:
- /library/lib/Math/ModularArithmetic/modint_base.hpp
- /library/lib/Math/ModularArithmetic/modint_base.hpp.html
title: "Modint\u69CB\u9020\u4F53\u306E\u57FA\u5E95\u30AF\u30E9\u30B9"
---
