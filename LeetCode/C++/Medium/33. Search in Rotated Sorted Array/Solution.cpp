class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n= nums.size();
        int hi = n-1,lo=0,mid;
        int pivot = -1;
        if(n==1){
            if(nums[0]==target) return 0;
            else return -1;
        }
        
        while(lo < hi) {
            mid = lo + (hi - lo)/2;
            if(nums[mid] > nums[hi]) lo = mid + 1;
            else hi = mid;
        }
        pivot = lo;

        if(target >= nums[pivot] && target<=nums[n-1]) {
            lo = pivot;
            hi = n-1;
        }
        else{
            lo=0;
            hi = pivot-1;
        }

        while(hi>=lo){
             mid = lo+(hi-lo)/2;
            if(nums[mid]== target) return mid;
            else if(nums[mid]>target) hi =mid-1;
            else lo = mid+1;
        }
        return -1;
    }
};