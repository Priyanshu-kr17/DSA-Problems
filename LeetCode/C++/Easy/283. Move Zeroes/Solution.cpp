class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // using two pointer approach
        int n = nums.size();
        int i=0;
        int j = 1;
        while(j<n){
            if(nums[i]==0 && nums[j]!=0) {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            if(nums[i]!=0) i++;
            if(nums[j]==0) j++;
           

        }
        return;
    }
};