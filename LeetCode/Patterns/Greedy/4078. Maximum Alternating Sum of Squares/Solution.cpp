class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)  
            if(nums[i]<0) nums[i]*= -1;

        sort(nums.begin(),nums.end());

        int i = 0;
        int j = n-1;
        long long result=0;

        while(j>=i){
            if(j==i) result+= nums[j]*nums[j]; 
            else  result+= nums[j]*nums[j] - nums[i]*nums[i];
            i++;
            j--;
        }
        return result;
    }
};