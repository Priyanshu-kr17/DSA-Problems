class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>=n) k = k%n;

        // flipping last k elements
        int i=n-k;
        int j = n-1;
        while(j>i){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }

        // flipping first k elements;

        i=0;
        j=n-k-1;
        while(j>i){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }

        reverse(nums.begin(),nums.end());
        return;
    }
};