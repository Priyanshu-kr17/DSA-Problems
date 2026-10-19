class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        int n = nums.size();
        int lo = 0, hi = n-1;
        if(nums.size()==0) return {-1,-1};
        vector<int> ans;

        // first binary search
        while(hi>=lo){
            int mid = lo+((hi-lo)/2);

            if(nums[mid]<x) lo=mid+1;
            else hi=mid-1; 
        }
        if(nums[lo]==x)
        ans.push_back(lo);

        lo=0,hi=n-1;

        // second binary search
        while(hi>=lo){
            int mid = lo+((hi-lo)/2);

            if(nums[mid]<=x) lo=mid+1;
            else hi=mid-1; 
        }
        if(nums[hi]==x)
        ans.push_back(hi);

        if(!ans.size()) return {-1,-1};

        return ans;
    }
};