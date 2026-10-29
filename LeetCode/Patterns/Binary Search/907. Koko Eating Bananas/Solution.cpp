class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int lo =1;
        int hi = *max_element(piles.begin(), piles.end());
        int ans=INT_MAX;

        while(hi>=lo){
            int mid = lo+(hi-lo)/2;

            int x = 0;
            // int time=0;
            for(auto ele : piles){
                if(mid>ele) x+=1;
                else{
                    if(ele%mid==0) x+= ele/mid;
                    else x+= ele/mid+1;                
                    }
            }
            
            if(x>h) lo=mid+1;
            else {
                ans=min(ans,mid);
                hi=mid-1;
            }
        }

        return ans;
    }
};