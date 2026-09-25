class Solution {
public:
    int maxAmount(int n, vector<int> &nums,vector<int> &dp){
        if(n==0) return nums[0];
        if(n==1) return max(nums[0],nums[1]);

        if(dp[n]!=-1) return dp[n];

        return dp[n] = max(nums[n]+maxAmount(n-2,nums,dp), maxAmount(n-1,nums,dp));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return maxAmount(n-1,nums,dp);
    }
};