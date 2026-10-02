class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyer–Moore Majority Vote Algorithm

        int majority=nums[0];
        int votes=1;
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]==majority) votes++;
            else{
                votes--;
                if(votes==0){
                    majority=nums[i];
                    votes++;
                }
            }
           
        }
        return majority;
    }
};