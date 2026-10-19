class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        int n = nums.size();
        int lo = 0, hi = n-1;
        if(nums.size()==0) return {-1,-1};
        
        int first=-1,last=-1;

        // first binary search
        while(hi>=lo){
            int mid = lo+((hi-lo)/2);

            if(nums[mid]<x) lo=mid+1;
            else hi=mid-1; 
        }
        if (lo < n && nums[lo] == x) {
        first = lo;
         }

        lo=0,hi=n-1;

        // second binary search
        while(hi>=lo){
            int mid = lo+((hi-lo)/2);

            if(nums[mid]<=x) lo=mid+1;
            else hi=mid-1; 
        }
        if (hi >= 0 && nums[hi] == x) {
        last = hi;
        }

        if(first==-1) return {-1,-1};

        return {first,last};
    }
};