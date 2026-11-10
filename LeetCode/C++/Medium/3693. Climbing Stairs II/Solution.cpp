class Solution {
public:
    int helper(int n, vector<int>& costs,vector<int> &dp){
        if(n == 0) return 0;
            if(n == 1) return costs[0] + 1;
            if(n == 2) return min(costs[1] + 4, helper(1, costs,dp) + costs[1] + 1);
            if(n == 3) return min({
                costs[2] + 9,
                helper(1, costs,dp) + costs[2] + 4,
                helper(2, costs,dp) + costs[2] + 1
            });
        
        if(dp[n]!=-1) return dp[n];

        return dp[n] = min(
            costs[n-1]+(n-(n-1))*(n-(n-1))+helper(n-1,costs,dp),
            min(
                costs[n-1]+(n-(n-2))*(n-(n-2))+helper(n-2,costs,dp),
                costs[n-1]+(n-(n-3))*(n-(n-3))+helper(n-3,costs,dp)
            )
        );
    }
    int climbStairs(int n, vector<int>& costs) {
        // vector<vector<int>> dp(n,vector<int> (n,-1));
        vector<int> dp(n+1,-1);
        return helper(n,costs,dp);
    }
};