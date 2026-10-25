class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        int hi=n-1, lo=0;

        if(n==1) return nums[0];

        while(hi>=lo){
            int mid = lo+(hi-lo)/2;

            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];

            else if(nums[mid]==nums[mid-1]){
                if(mid%2==0) hi=mid-1;
                else lo=mid+1;
            }
            else{
                if(mid%2==0) lo=mid+1;
                else hi=mid-1;
            }
        }
        return nums[lo];
    }
};