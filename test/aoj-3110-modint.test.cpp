#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/3110"

#include <iostream>
#include <string>
#include <vector>

#include "../lib/Math/ModularArithmetic/modint.hpp"
#include "../lib/Utils/debug.hpp"
#include "../lib/Utils/table.hpp"

int main() {
    std::string s, t;
    std::cin >> s >> t;

    std::vector<int> acc(10, 0);  // acc[i]:=(0からiまでの累積和).
    for(int i = 1; i < 10; ++i) acc[i] = acc[i - 1] + i;
    debug(acc);

    const int n = s.size();
    // dp[i+1][0]:=(i文字まで見て，SがTより大きい場合の通り数).
    // dp[i+1][1]:=(i文字まで見て，SとTが等しい場合の通り数).
    auto &&dp = algorithm::table(n + 1, 2, algorithm::mint1000000007(0));
    dp[0][1] = 1;
    // dp2[i+1][0]:=(i文字まで見て，SがTより大きい場合のTの総和).
    // dp2[i+1][1]:=(i文字まで見て，SとTが等しい場合のTの総和).
    auto &&dp2 = algorithm::table(n + 1, 2, algorithm::mint1000000007(0));
    for(int i = 0; i < n; ++i) {
        int a = s[i] - '0';
        if(t[i] == '?') {
            dp[i + 1][0] += dp[i][0] * 10;
            dp2[i + 1][0] += dp2[i][0] * 10 * 10 + acc[9] * dp[i][0];
            if(a > 0) {
                dp[i + 1][0] += dp[i][1] * a;
                dp2[i + 1][0] += dp2[i][1] * 10 * a + acc[a - 1] * dp[i][1];
            }
            dp[i + 1][1] += dp[i][1];
            dp2[i + 1][1] += dp2[i][1] * 10 + a * dp[i][1];
        } else {
            int b = t[i] - '0';
            dp[i + 1][0] += dp[i][0];
            dp2[i + 1][0] += dp2[i][0] * 10 + b * dp[i][0];
            if(b < a) {
                dp[i + 1][0] += dp[i][1];
                dp2[i + 1][0] += dp2[i][1] * 10 + b * dp[i][1];
            } else if(b == a) {
                dp[i + 1][1] += dp[i][1];
                dp2[i + 1][1] += dp2[i][1] * 10 + b * dp[i][1];
            }
        }
        debug(i + 1, dp[i + 1], dp2[i + 1]);
    }

    auto ans = dp2[n][0] + dp2[n][1];
    std::cout << ans << std::endl;
}
