// Minimum coins for change
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount+1, INT_MAX);
    dp[0] = 0;
// activity chunk 32
    for (int i = 1; i <= amount; ++i)
        for (int c : coins)
            if (i >= c && dp[i-c] != INT_MAX)
// activity chunk 48
                dp[i] = min(dp[i], dp[i-c]+1);
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}
int main() {
    vector<int> coins = {1,2,5};
    cout << coinChange(coins, 11);
    return 0;
}
