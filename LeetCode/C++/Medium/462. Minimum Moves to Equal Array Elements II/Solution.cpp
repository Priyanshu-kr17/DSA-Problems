class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();

        int moves=0;

        sort(nums.begin(),nums.end());
        int idx = n/2;

        for(int i=0;i<n;i++){
            moves+= abs(nums[i]-nums[idx]);
        }
        return moves;
    }
};