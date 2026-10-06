class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i=n-2;
        int j=n-1;
         
        while(i>=0){
            if(nums[j]>nums[i]){
                swap(nums[j],nums[i]);
                return;
            }
            else{
                i--;
                j--;
            }
        }
        sort(nums.begin(),nums.end());
        return;
    }
};