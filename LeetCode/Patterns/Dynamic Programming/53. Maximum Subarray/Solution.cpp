class Solution {
public:
    int helper(int n, vector<int>& nums,vector<int> &dp){
        if(n==0) return nums[0];
        if(dp[n]!=-1) return dp[n];
        return dp[n] = max(nums[n],nums[n]+helper(n-1,nums,dp));
    }

    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        vector<int> dp(n,-1);
        if(n==1) return nums[0];
        // if(n==2) return max(nums[0]+nums[1],nums[1]);
        // vector<int> dp(2);
        
        // for(int i=0;i<n;i++)
        // maxi = max(maxi,helper(i,nums,dp));
        
            dp[0]=nums[0];
            for(int j=1;j<n;j++){
                dp[j] = max(nums[j]+dp[j-1],nums[j]);             
            }
            for(int i=0;i<n;i++)
            maxi = max(dp[i],maxi);

        return maxi;
    }
};