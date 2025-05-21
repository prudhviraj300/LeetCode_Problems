class Solution {
    public int climbStairs(int n) {
        // tabulation
        // int[] dp = new int [n + 1];  // [0 1 2 3 4 5 ]
        //                              // [1 1 2 3 5 8 ]
        // dp[0] = 1;
        // dp[1] = 1;
        //                             // [ 1 1 2 3 5 8]
        // for(int i = 2; i <= n; i++){
        //     dp[i] = dp[i - 1]  + dp[i - 2];
        // }
        // // tc = o(n) sc = o(1)

        // return dp[n];


        int [] dp = new int[3]; // [ 0 1 2 ]

        dp[0] = 1;
        dp[1] = 1;

        for(int i = 2; i <= n; i++){
            dp[i % 3] = dp[(i - 1) % 3] + dp[(i - 2) % 3];
        }

        return dp[n % 3];
    }
}