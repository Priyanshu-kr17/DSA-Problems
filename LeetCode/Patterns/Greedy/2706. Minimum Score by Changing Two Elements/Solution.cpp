class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();

        sort(begin(nums),end(nums));
        int ans;
        // changing two smallest
        ans=  nums[n-1]-nums[2];

        //changing two largest

        ans = min(ans,nums[n-3]-nums[0]);

        // changing largest and  smallest

        ans = min(ans,nums[n-2]-nums[1]);
        return ans;
    }
};