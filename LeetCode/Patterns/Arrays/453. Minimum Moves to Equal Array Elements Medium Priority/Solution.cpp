class Solution {
public:
    bool check(vector<int>& nums){ // will check if all the elements in nums are equal or not
        int n = nums.size();
        int i=0;
        while(i<n-1){
            if(nums[i]!=nums[i+1]) return false;
            i++;
        }
        return true;
    }
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int moves=0;

        while(!check(nums)){
            sort(nums.begin(),nums.end());

            int diff = nums[n-1]-nums[0];
            moves+= diff;

            for(int i=0;i<n-1;i++){
                nums[i]+=diff;
            }

        }
        return moves;
    }
};