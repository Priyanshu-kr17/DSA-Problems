class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();

        sort(begin(nums),end(nums));

        return nums[n-1]-nums[2];
    }
};