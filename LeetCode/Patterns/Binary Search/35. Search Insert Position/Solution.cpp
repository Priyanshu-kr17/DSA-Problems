class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int lo=0;
        int hi=n-1;
        int mid;
        if(nums[0]>target) return 0;
        // if(nums[n-1]<target) return n;
        while(hi>=lo){
            mid= lo +(hi-lo)/2;
            if(nums[mid]== target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else lo = mid+1;
        }
        return lo;
    }
};