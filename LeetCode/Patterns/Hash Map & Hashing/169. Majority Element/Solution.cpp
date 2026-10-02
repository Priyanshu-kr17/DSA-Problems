class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // boyer moore majority algorithm
        int n = nums.size();
        int majority = nums[0];
        int count = 1;
        int i=1;
        while(i<n){
            if(nums[i]==majority) count++;
            else {
                count--;
                if(count==0){
                    majority=nums[i];
                    count++;
                }
            }
            i++;
        }
        return majority;
    }
};