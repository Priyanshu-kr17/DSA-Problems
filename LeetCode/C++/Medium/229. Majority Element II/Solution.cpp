class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums;
        

        int majority1=INT_MAX,majority2=INT_MAX;
        int count1=0,count2=0;
        

        for(int i=0;i<n;i++){
            if(nums[i]==majority1) count1++;
            else if(nums[i]==majority2) count2++;
            else if(count1==0){
                majority1=nums[i];
                count1++;
            }
            else if(count2==0) {
                majority2=nums[i];
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }

        int freq[2]={0};
        for(int i=0;i<n;i++){
            if(nums[i]==majority1) freq[0]++;
           else if(nums[i]==majority2) freq[1]++;
        }

        if(freq[0]>n/3 && freq[1]>n/3) return{majority1,majority2};
        else if(freq[0]>n/3) return {majority1};
        else if(freq[1]>n/3) return {majority2};
        return {};

    }
};