class Solution {
public:
    

    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int m=0;
        int multi=1;
        int neg=1;

        for(int i=0;i<n;i++){
            multi*= nums[i];
            m = max(multi,m);
            // if(multi==0) multi=1;
            if(multi<0){
                neg*=multi;
                m = max(neg,m);
                multi=1;
            }
        }
        return m;
    }
};