class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
            int n = nums.size();
            int maxval=nums[0];
            for(auto x: nums){
                if(x>maxval) maxval = max(x,maxval);
            }

            int ans=maxval;
            int lo = 1;
            int hi = maxval;

            while(hi>=lo){
                int mid = lo+(hi-lo)/2;
                
                int sum=0;
                // checking for sum
                for(int i=0;i<n;i++){
                    sum += (nums[i] + mid - 1) / mid;
                }
                if (sum <= threshold) {
                    ans = mid;
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            }
            return ans;
    }
};