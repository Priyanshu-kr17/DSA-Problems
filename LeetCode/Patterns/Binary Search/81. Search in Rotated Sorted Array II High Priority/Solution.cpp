class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = -1;

        if(n==1){
            if(nums[0]==target) return true;
            return false; 
        }

        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]) {
                pivot=i+1;
                break;
            }
        }
        
        int hi,lo;
        if(target>=nums[pivot] && target<=nums[n-1]){
            lo = pivot;
            hi = n-1;
        }
        else{
            lo=0;
            hi = pivot-1;
        }

        while(hi>=lo){
            int mid = lo+(hi-lo)/2;

            if(nums[mid]==target) return true;
            else if(target>nums[mid]) lo=mid+1;
            else hi=mid-1;
        }
        return false;
    }
};