class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return 0;
        else if(n==2){
            if(nums[0]>nums[1]) return 0;
            return 1;
        }
        int lo=0;
        int hi=n-1;

        while(hi>=lo){
            int mid = lo+(hi-lo)/2;
            if(mid>0 && mid<n-1 && nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;
            else if(mid==0 || nums[mid]>nums[mid-1]) lo=mid+1;
            else hi=mid-1;

        }
        if(hi>=n-1) return n-1;
        return hi;      
    }
};