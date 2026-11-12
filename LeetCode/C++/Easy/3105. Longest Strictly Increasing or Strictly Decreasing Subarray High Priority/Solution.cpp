class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int increasing=0;
        int decreasing=0;
        int n = nums.size();

        int i=0;
        // strictly increasing
        while(i<n-1){
            if(nums[i]<nums[i+1]){
                int len=1;
                while(i<n-1 && nums[i]<nums[i+1]){
                    len++;
                    i++;
                }
                increasing = max(increasing,len);
            }
            else i++;
        }

        // strictly decreasing
        i=0;
        while(i<n-1){
            if(nums[i]>nums[i+1]){
                int len=1;
                while(i<n-1 && nums[i]>nums[i+1]){
                    len++;
                    i++;
                }
                decreasing = max(decreasing,len);
            }
            else i++;
        }
        int sublen = max(increasing,decreasing);
        if(sublen==0) return 1;
        return sublen;
    }
};