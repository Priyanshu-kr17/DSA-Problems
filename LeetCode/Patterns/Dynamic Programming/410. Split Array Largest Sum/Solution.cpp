class Solution {
public:
    bool splitcheck(vector<int>& nums, int k, int mid){
        int i;
        int sum=0;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>mid){
                k--;
                sum=nums[i];
            }
        }
        if(k<1) return false;
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=0;
        for(auto ele: nums) sum+= ele;
        int lo = *max_element(nums.begin(), nums.end());
        int hi = sum;

        while(hi>=lo){
            int mid = lo+(hi-lo)/2;

            if(splitcheck(nums,k,mid)) hi=mid-1;
            else lo=mid+1;
        }
        return lo;
    }
};