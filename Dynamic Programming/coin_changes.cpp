#include<bits/stdc++.h>
using namespace std;
  int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1);
    dp[0] = 0;
    for (int i = 1; i <= amount; ++i) {
        dp[i] = INT_MAX / 2; // set a very large number
        for (int j : coins) {
            if (j > i) continue;
            dp[i] = min(dp[i], dp[i - j] + 1); // we use j to make up i
            }
            }
            return dp[amount] == INT_MAX / 2 ? -1 : dp
            [amount];


        
    }
int main()
{
   
    vector<int> coins={2};
    cout<<coinChange(coins,11)<<endl;
    return 0;
}