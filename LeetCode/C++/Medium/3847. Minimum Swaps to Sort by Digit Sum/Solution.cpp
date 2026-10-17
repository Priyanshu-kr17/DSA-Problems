class Solution {
public:
    static int getsum(int num){
        int sum=0;
        while(num){
            sum+= num%10;
            num/=10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted;
        sorted=nums;
        int swaps=0;

        auto lambda = [](int num1, int num2){
            int digitsum1 = getsum(num1);
            int digitsum2 = getsum(num2);
            if(digitsum1!= digitsum2){
                return digitsum1<digitsum2;
            }
            return num1<num2;
        };

        sort(begin(nums),end(nums),lambda);

        // storing nums in map
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }

        for(int i=0;i<n-1;i++){
            int expectedVal = sorted[i];
            int currentVal = nums[i];

            int idx = mp[expectedVal];
            if(expectedVal!=currentVal){
                nums[i] = expectedVal;
                nums[idx] = currentVal;

                mp[currentVal] = idx;
                mp[expectedVal] = i;
                swaps++;
            }
        }
        return swaps;
        
    }
};