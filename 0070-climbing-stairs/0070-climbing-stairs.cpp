class Solution {
public:
    int dp[3];
    void noOfWays(int n){
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2; i <= n; i++){
            dp[i % 3] = dp[(i - 1) % 3] + dp[(i - 2) % 3];
        }
    }

    int climbStairs(int n) {
        noOfWays(n);
        return dp[n % 3];

    }
};