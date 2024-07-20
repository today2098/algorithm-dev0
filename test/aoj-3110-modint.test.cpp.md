---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: lib/Math/ModularArithmetic/modint.hpp
    title: "Modint\u69CB\u9020\u4F53"
  - icon: ':heavy_check_mark:'
    path: lib/Math/ModularArithmetic/modint_base.hpp
    title: "Modint\u69CB\u9020\u4F53\u306E\u57FA\u5E95\u30AF\u30E9\u30B9"
  - icon: ':heavy_check_mark:'
    path: lib/Utils/debug.hpp
    title: "\u30C7\u30D0\u30C3\u30B0\u7528\u95A2\u6570\u5F62\u5F0F\u30DE\u30AF\u30ED"
  - icon: ':heavy_check_mark:'
    path: lib/Utils/table.hpp
    title: "\u591A\u6B21\u5143\u914D\u5217\u751F\u6210"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/3110
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/3110
  bundledCode: "#line 1 \"test/aoj-3110-modint.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/3110\"\
    \n\n#include <iostream>\n#include <string>\n#include <vector>\n\n#line 1 \"lib/Math/ModularArithmetic/modint.hpp\"\
    \n\n\n\n/**\n * @brief Modint\u69CB\u9020\u4F53\n * @docs docs/Math/ModularArithmetic/modint.md\n\
    \ */\n\n#line 10 \"lib/Math/ModularArithmetic/modint.hpp\"\n#include <utility>\n\
    \n#line 1 \"lib/Math/ModularArithmetic/modint_base.hpp\"\n\n\n\n/**\n * @brief\
    \ Modint\u69CB\u9020\u4F53\u306E\u57FA\u5E95\u30AF\u30E9\u30B9\n * @docs docs/Math/ModularArithmetic/modint_base.md\n\
    \ */\n\n#include <type_traits>\n\nnamespace algorithm {\n\nclass ModintBase {};\n\
    \ntemplate <class T>\nusing is_modint = std::is_base_of<ModintBase, T>;\n\ntemplate\
    \ <class T>\ninline constexpr bool is_modint_v = is_modint<T>::value;\n\n}  //\
    \ namespace algorithm\n\n\n#line 13 \"lib/Math/ModularArithmetic/modint.hpp\"\n\
    \nnamespace algorithm {\n\ntemplate <int mod>\nclass Modint : ModintBase {\n \
    \   long long val;\n\n    constexpr void normalize() {\n        if(val < -mod\
    \ or mod <= val) val %= mod;\n        if(val < 0) val += mod;\n    }\n\npublic:\n\
    \    constexpr Modint() : Modint(0) {}\n    constexpr Modint(long long val_) :\
    \ val(val_) {\n        static_assert(mod >= 1);\n        normalize();\n    }\n\
    \n    constexpr Modint operator+() const { return Modint(*this); }\n    constexpr\
    \ Modint operator-() const { return (val == 0 ? Modint(*this) : Modint(mod - val));\
    \ }\n    constexpr Modint &operator++() {\n        val++;\n        if(val == mod)\
    \ val = 0;\n        return *this;\n    }\n    constexpr Modint &operator--() {\n\
    \        if(val == 0) val = mod;\n        val--;\n        return *this;\n    }\n\
    \    constexpr Modint operator++(int) {\n        Modint res = *this;\n       \
    \ ++(*this);\n        return res;\n    }\n    constexpr Modint operator--(int)\
    \ {\n        Modint res = *this;\n        --(*this);\n        return res;\n  \
    \  }\n    constexpr Modint &operator+=(const Modint &rhs) {\n        val += rhs.val;\n\
    \        if(val >= mod) val -= mod;\n        return *this;\n    }\n    constexpr\
    \ Modint &operator-=(const Modint &rhs) {\n        val -= rhs.val;\n        if(val\
    \ < 0) val += mod;\n        return *this;\n    }\n    constexpr Modint &operator*=(const\
    \ Modint &rhs) {\n        val = val * rhs.val % mod;\n        return *this;\n\
    \    }\n    constexpr Modint &operator/=(const Modint &rhs) { return *this *=\
    \ rhs.inv(); }\n\n    friend constexpr bool operator==(const Modint &lhs, const\
    \ Modint &rhs) { return lhs.val == rhs.val; }\n    friend constexpr bool operator!=(const\
    \ Modint &lhs, const Modint &rhs) { return lhs.val != rhs.val; }\n    friend constexpr\
    \ Modint operator+(const Modint &lhs, const Modint &rhs) { return Modint(lhs)\
    \ += rhs; }\n    friend constexpr Modint operator-(const Modint &lhs, const Modint\
    \ &rhs) { return Modint(lhs) -= rhs; }\n    friend constexpr Modint operator*(const\
    \ Modint &lhs, const Modint &rhs) { return Modint(lhs) *= rhs; }\n    friend constexpr\
    \ Modint operator/(const Modint &lhs, const Modint &rhs) { return Modint(lhs)\
    \ /= rhs; }\n    friend constexpr std::istream &operator>>(std::istream &is, Modint\
    \ &rhs) {\n        is >> rhs.val;\n        rhs.normalize();\n        return is;\n\
    \    }\n    friend constexpr std::ostream &operator<<(std::ostream &os, const\
    \ Modint &rhs) { return os << rhs.val; }\n\n    static constexpr int modulus()\
    \ { return mod; }\n    constexpr long long value() const { return val; }\n   \
    \ constexpr Modint inv() const {\n        long long a = mod, b = val, u = 0, v\
    \ = 1;\n        while(b != 0) {\n            long long t = a / b;\n          \
    \  a -= b * t, u -= v * t;\n            std::swap(a, b), std::swap(u, v);\n  \
    \      }\n        return Modint(u);\n    }\n    constexpr Modint pow(long long\
    \ k) const {\n        if(k < 0) return inv().pow(-k);\n        Modint res = 1,\
    \ mul = *this;\n        while(k > 0) {\n            if(k & 1LL) res *= mul;\n\
    \            mul *= mul;\n            k >>= 1;\n        }\n        return res;\n\
    \    }\n\n    friend constexpr Modint mod_inv(const Modint &a) { return a.inv();\
    \ }\n    friend constexpr Modint mod_pow(const Modint &a, long long k) { return\
    \ a.pow(k); }\n};\n\nusing mint998244353 = Modint<998'244'353>;\nusing mint1000000007\
    \ = Modint<1'000'000'007>;\n\n}  // namespace algorithm\n\n\n#line 1 \"lib/Utils/debug.hpp\"\
    \n\n\n\n/**\n * @brief \u30C7\u30D0\u30C3\u30B0\u7528\u95A2\u6570\u5F62\u5F0F\u30DE\
    \u30AF\u30ED\n * @docs docs/Utils/debug.md\n */\n\n#line 10 \"lib/Utils/debug.hpp\"\
    \n#include <iterator>\n#include <queue>\n#include <stack>\n#line 14 \"lib/Utils/debug.hpp\"\
    \n#include <string_view>\n#include <tuple>\n#line 18 \"lib/Utils/debug.hpp\"\n\
    \n// #define DEBUG\n\n#ifdef DEBUG\n\n#define debug(...) algorithm::debug::debug_internal(__LINE__,\
    \ #__VA_ARGS__, __VA_ARGS__)\n\nnamespace algorithm {\n\nnamespace debug {\n\n\
    constexpr std::ostream &os = std::clog;\n\nstruct has_iterator_impl {\n    template\
    \ <class T>\n    static constexpr std::true_type check(typename T::iterator *);\n\
    \n    template <class T>\n    static constexpr std::false_type check(...);\n};\n\
    \ntemplate <class T>\nclass has_iterator : public decltype(has_iterator_impl::check<T>(nullptr))\
    \ {};\n\n// Prototype declaration.\nvoid print(const std::string &s);\nvoid print(std::string_view\
    \ s);\ntemplate <typename T, typename U>\nvoid print(const std::pair<T, U> &p);\n\
    template <class T, std::size_t... Idxes>\nvoid print_tuple(const T &t, std::index_sequence<Idxes...>);\n\
    template <typename... Ts>\nvoid print(const std::tuple<Ts...> &t);\ntemplate <typename...\
    \ Ts>\nvoid print(const std::stack<Ts...> &st);\ntemplate <typename... Ts>\nvoid\
    \ print(const std::queue<Ts...> &que);\ntemplate <typename... Ts>\nvoid print(const\
    \ std::priority_queue<Ts...> &pque);\ntemplate <class T, typename std::enable_if_t<has_iterator<T>::value,\
    \ bool> = false>\nvoid print(const T &v);\ntemplate <typename T, typename std::enable_if_t<!has_iterator<T>::value,\
    \ bool> = false>\nvoid print(const T &elem);\ntemplate <typename T, typename...\
    \ Args>\nvoid debug_internal(int line, std::string_view context, T &&first, Args\
    \ &&...args);\n\nvoid print(const std::string &s) { os << s; }\n\nvoid print(std::string_view\
    \ s) { os << s; }\n\ntemplate <typename T, typename U>\nvoid print(const std::pair<T,\
    \ U> &p) {\n    os << \"{\";\n    print(p.first);\n    os << \", \";\n    print(p.second);\n\
    \    os << \"}\";\n}\n\ntemplate <class T, std::size_t... Idxes>\nvoid print_tuple(const\
    \ T &t, std::index_sequence<Idxes...>) {\n    os << \"{\";\n    ((os << (Idxes\
    \ == 0 ? \"\" : \", \"), print(std::get<Idxes>(t))), ...);\n    os << \"}\";\n\
    }\n\ntemplate <typename... Ts>\nvoid print(const std::tuple<Ts...> &t) {\n   \
    \ print_tuple(t, std::make_index_sequence<sizeof...(Ts)>());\n}\n\ntemplate <typename...\
    \ Ts>\nvoid print(const std::stack<Ts...> &st) {\n    std::stack<Ts...> tmp =\
    \ st;\n    os << \"[\";\n    while(!tmp.empty()) {\n        print(tmp.top());\n\
    \        tmp.pop();\n        if(!tmp.empty()) os << \" \";\n    }\n    os << \"\
    ]\";\n}\n\ntemplate <typename... Ts>\nvoid print(const std::queue<Ts...> &que)\
    \ {\n    std::queue<Ts...> tmp = que;\n    os << \"[\";\n    while(!tmp.empty())\
    \ {\n        print(tmp.front());\n        tmp.pop();\n        if(!tmp.empty())\
    \ os << \" \";\n    }\n    os << \"]\";\n}\n\ntemplate <typename... Ts>\nvoid\
    \ print(const std::priority_queue<Ts...> &pque) {\n    std::priority_queue<Ts...>\
    \ tmp = pque;\n    os << \"[\";\n    while(!tmp.empty()) {\n        print(tmp.top());\n\
    \        tmp.pop();\n        if(!tmp.empty()) os << \" \";\n    }\n    os << \"\
    ]\";\n}\n\ntemplate <class T, typename std::enable_if_t<has_iterator<T>::value,\
    \ bool> >\nvoid print(const T &v) {\n    os << \"[\";\n    for(auto itr = std::cbegin(v);\
    \ itr != std::cend(v); ++itr) {\n        if(itr != std::cbegin(v)) os << \" \"\
    ;\n        print(*itr);\n    }\n    os << \"]\";\n}\n\ntemplate <typename T, typename\
    \ std::enable_if_t<!has_iterator<T>::value, bool> >\nvoid print(const T &elem)\
    \ { os << elem; }\n\ntemplate <typename T, typename... Args>\nvoid debug_internal(int\
    \ line, std::string_view context, T &&first, Args &&...args) {\n    constexpr\
    \ const char *open_bracket = (sizeof...(args) == 0 ? \"\" : \"(\");\n    constexpr\
    \ const char *close_bracket = (sizeof...(args) == 0 ? \"\" : \")\");\n    os <<\
    \ \"[L\" << line << \"] \" << open_bracket << context << close_bracket << \":\
    \ \" << open_bracket;\n    print(std::forward<T>(first));\n    ((os << \", \"\
    , print(std::forward<Args>(args))), ...);\n    os << close_bracket << std::endl;\n\
    }\n\n}  // namespace debug\n\n}  // namespace algorithm\n\n#else\n\n#define debug(...)\
    \ static_cast<void>(0)\n\n#endif\n\n\n#line 1 \"lib/Utils/table.hpp\"\n\n\n\n\
    /**\n * @brief \u591A\u6B21\u5143\u914D\u5217\u751F\u6210\n * @docs docs/Utils/table.md\n\
    \ */\n\n#line 10 \"lib/Utils/table.hpp\"\n\nnamespace algorithm {\n\ntemplate\
    \ <typename Type>\nstd::vector<Type> table(size_t n, const Type &val) { return\
    \ std::vector<Type>(n, val); }\n\ntemplate <typename... Args>\nauto table(size_t\
    \ n, const Args &...args) { return std::vector(n, table(args...)); }\n\n}  //\
    \ namespace algorithm\n\n\n#line 10 \"test/aoj-3110-modint.test.cpp\"\n\nint main()\
    \ {\n    std::string s, t;\n    std::cin >> s >> t;\n\n    std::vector<int> acc(10,\
    \ 0);  // acc[i]:=(0\u304B\u3089i\u307E\u3067\u306E\u7D2F\u7A4D\u548C).\n    for(int\
    \ i = 1; i < 10; ++i) acc[i] = acc[i - 1] + i;\n    debug(acc);\n\n    const int\
    \ n = s.size();\n    // dp[i+1][0]:=(i\u6587\u5B57\u307E\u3067\u898B\u3066\uFF0C\
    S\u304CT\u3088\u308A\u5927\u304D\u3044\u5834\u5408\u306E\u901A\u308A\u6570).\n\
    \    // dp[i+1][1]:=(i\u6587\u5B57\u307E\u3067\u898B\u3066\uFF0CS\u3068T\u304C\
    \u7B49\u3057\u3044\u5834\u5408\u306E\u901A\u308A\u6570).\n    auto &&dp = algorithm::table(n\
    \ + 1, 2, algorithm::mint1000000007(0));\n    dp[0][1] = 1;\n    // dp2[i+1][0]:=(i\u6587\
    \u5B57\u307E\u3067\u898B\u3066\uFF0CS\u304CT\u3088\u308A\u5927\u304D\u3044\u5834\
    \u5408\u306ET\u306E\u7DCF\u548C).\n    // dp2[i+1][1]:=(i\u6587\u5B57\u307E\u3067\
    \u898B\u3066\uFF0CS\u3068T\u304C\u7B49\u3057\u3044\u5834\u5408\u306ET\u306E\u7DCF\
    \u548C).\n    auto &&dp2 = algorithm::table(n + 1, 2, algorithm::mint1000000007(0));\n\
    \    for(int i = 0; i < n; ++i) {\n        int a = s[i] - '0';\n        if(t[i]\
    \ == '?') {\n            dp[i + 1][0] += dp[i][0] * 10;\n            dp2[i + 1][0]\
    \ += dp2[i][0] * 10 * 10 + acc[9] * dp[i][0];\n            if(a > 0) {\n     \
    \           dp[i + 1][0] += dp[i][1] * a;\n                dp2[i + 1][0] += dp2[i][1]\
    \ * 10 * a + acc[a - 1] * dp[i][1];\n            }\n            dp[i + 1][1] +=\
    \ dp[i][1];\n            dp2[i + 1][1] += dp2[i][1] * 10 + a * dp[i][1];\n   \
    \     } else {\n            int b = t[i] - '0';\n            dp[i + 1][0] += dp[i][0];\n\
    \            dp2[i + 1][0] += dp2[i][0] * 10 + b * dp[i][0];\n            if(b\
    \ < a) {\n                dp[i + 1][0] += dp[i][1];\n                dp2[i + 1][0]\
    \ += dp2[i][1] * 10 + b * dp[i][1];\n            } else if(b == a) {\n       \
    \         dp[i + 1][1] += dp[i][1];\n                dp2[i + 1][1] += dp2[i][1]\
    \ * 10 + b * dp[i][1];\n            }\n        }\n        debug(i + 1, dp[i +\
    \ 1], dp2[i + 1]);\n    }\n\n    auto ans = dp2[n][0] + dp2[n][1];\n    std::cout\
    \ << ans << std::endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/3110\"\n\n#include\
    \ <iostream>\n#include <string>\n#include <vector>\n\n#include \"../lib/Math/ModularArithmetic/modint.hpp\"\
    \n#include \"../lib/Utils/debug.hpp\"\n#include \"../lib/Utils/table.hpp\"\n\n\
    int main() {\n    std::string s, t;\n    std::cin >> s >> t;\n\n    std::vector<int>\
    \ acc(10, 0);  // acc[i]:=(0\u304B\u3089i\u307E\u3067\u306E\u7D2F\u7A4D\u548C\
    ).\n    for(int i = 1; i < 10; ++i) acc[i] = acc[i - 1] + i;\n    debug(acc);\n\
    \n    const int n = s.size();\n    // dp[i+1][0]:=(i\u6587\u5B57\u307E\u3067\u898B\
    \u3066\uFF0CS\u304CT\u3088\u308A\u5927\u304D\u3044\u5834\u5408\u306E\u901A\u308A\
    \u6570).\n    // dp[i+1][1]:=(i\u6587\u5B57\u307E\u3067\u898B\u3066\uFF0CS\u3068\
    T\u304C\u7B49\u3057\u3044\u5834\u5408\u306E\u901A\u308A\u6570).\n    auto &&dp\
    \ = algorithm::table(n + 1, 2, algorithm::mint1000000007(0));\n    dp[0][1] =\
    \ 1;\n    // dp2[i+1][0]:=(i\u6587\u5B57\u307E\u3067\u898B\u3066\uFF0CS\u304C\
    T\u3088\u308A\u5927\u304D\u3044\u5834\u5408\u306ET\u306E\u7DCF\u548C).\n    //\
    \ dp2[i+1][1]:=(i\u6587\u5B57\u307E\u3067\u898B\u3066\uFF0CS\u3068T\u304C\u7B49\
    \u3057\u3044\u5834\u5408\u306ET\u306E\u7DCF\u548C).\n    auto &&dp2 = algorithm::table(n\
    \ + 1, 2, algorithm::mint1000000007(0));\n    for(int i = 0; i < n; ++i) {\n \
    \       int a = s[i] - '0';\n        if(t[i] == '?') {\n            dp[i + 1][0]\
    \ += dp[i][0] * 10;\n            dp2[i + 1][0] += dp2[i][0] * 10 * 10 + acc[9]\
    \ * dp[i][0];\n            if(a > 0) {\n                dp[i + 1][0] += dp[i][1]\
    \ * a;\n                dp2[i + 1][0] += dp2[i][1] * 10 * a + acc[a - 1] * dp[i][1];\n\
    \            }\n            dp[i + 1][1] += dp[i][1];\n            dp2[i + 1][1]\
    \ += dp2[i][1] * 10 + a * dp[i][1];\n        } else {\n            int b = t[i]\
    \ - '0';\n            dp[i + 1][0] += dp[i][0];\n            dp2[i + 1][0] +=\
    \ dp2[i][0] * 10 + b * dp[i][0];\n            if(b < a) {\n                dp[i\
    \ + 1][0] += dp[i][1];\n                dp2[i + 1][0] += dp2[i][1] * 10 + b *\
    \ dp[i][1];\n            } else if(b == a) {\n                dp[i + 1][1] +=\
    \ dp[i][1];\n                dp2[i + 1][1] += dp2[i][1] * 10 + b * dp[i][1];\n\
    \            }\n        }\n        debug(i + 1, dp[i + 1], dp2[i + 1]);\n    }\n\
    \n    auto ans = dp2[n][0] + dp2[n][1];\n    std::cout << ans << std::endl;\n\
    }\n"
  dependsOn:
  - lib/Math/ModularArithmetic/modint.hpp
  - lib/Math/ModularArithmetic/modint_base.hpp
  - lib/Utils/debug.hpp
  - lib/Utils/table.hpp
  isVerificationFile: true
  path: test/aoj-3110-modint.test.cpp
  requiredBy: []
  timestamp: '2024-07-20 13:42:52+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj-3110-modint.test.cpp
layout: document
redirect_from:
- /verify/test/aoj-3110-modint.test.cpp
- /verify/test/aoj-3110-modint.test.cpp.html
title: test/aoj-3110-modint.test.cpp
---
