class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();       
        int maxCount=0;
        unordered_set<int> numsSet;
        for(int i=0;i<n;i++){
            numsSet.insert(nums[i]);
        }

        for(int ele : numsSet){
            int count=1;
            if(numsSet.find(ele-1)!=numsSet.end()) continue;
            else{
                int x =ele;
                while(numsSet.find(x+1)!=numsSet.end()){                   
                        count++;
                        x = x+1;                  
                }
            }
            maxCount=max(maxCount,count);
        }
        return maxCount;
    }
};