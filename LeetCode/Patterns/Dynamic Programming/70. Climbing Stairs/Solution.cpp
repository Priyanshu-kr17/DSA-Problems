class Solution {
public:
    int helper(int n, vector<int>& dp){
        if(n<=2) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n] =  helper(n-1,dp) + helper(n-2,dp);
        
    }
    int climbStairs(int n){ 
        if(n<=2) return n;      
        // vector<int> dp(n+1,-1);
        // return helper(n,dp);     

        // bottom up approach
        // vector<int> dp(n+1,-1);
        // dp[0]=0;
        // dp[1]=1;
        // dp[2]=2;

        // for(int i=3;i<=n;i++){
        //     dp[i] = dp[i-1] + dp[i-2];
        // }  
        // return dp[n];

        int dp[3];
        dp[0] = 1;
        dp[1] = 2;
        dp[2] = -1;
        
        for(int i=3;i<=n;i++){
            dp[2] = dp[0]+dp[1];
            dp[0]=dp[1];
            dp[1] = dp[2];
        }
        return dp[2];

    }
};