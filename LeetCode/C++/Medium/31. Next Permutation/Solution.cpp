class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        // finding the breakpoint

        int idx=-1;
        for(int i =n-2;i>=0;i--){
            if(nums[i+1]>nums[i]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        // finding just greater number than nums[idx] from backward

        for(int i=n-1;i>=idx;i--){
            if(nums[i]>nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }

        // sorting  the remaining elements

        reverse(nums.begin()+idx+1,nums.end());
        return;
    }
};