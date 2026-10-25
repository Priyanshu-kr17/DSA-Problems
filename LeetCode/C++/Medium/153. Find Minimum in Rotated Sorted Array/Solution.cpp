class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        
        int pivot = -1;

        int hi=n-1,lo=0;

        while(hi>lo){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid-1;
        }
        // if(pivot==-1) return nums[0];

        pivot=lo;
        if(nums[pivot]<nums[0]) return nums[pivot];
        return nums[0];
    }
};