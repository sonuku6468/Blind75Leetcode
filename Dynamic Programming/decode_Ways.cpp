#include<bits/stdc++.h>
using namespace std;
 int numDecodings(string s) {
        if (s.empty()) return 0;
        int n = s.length();
        vector<int> dp(n+1, 0);
        dp[0] = 1;
        dp[1] = s[0] == '0' ? 0 : 1;
        for (int i = 2; i <= n; ++i) {
            // s[i-1] is not '0'
            if (s[i-1] > '0') {
                dp[i] += dp[i-1];
            }
            // s[i-2] and s[i-1] form a valid 2-digit number that is not '00'
            if (s[i-2] == '1' || (s[i-2] == '2' && s[i-1] <= '6')) {
                dp[i] += dp[i-2];
            }
        }
        return dp[n];
    }
int main()
{
    cout<<numDecodings("226");

    return 0;
}