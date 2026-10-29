class Solution {
    bool checks(int speed,vector<int>& piles, int h){
      int n=piles.size();
      long long count=0;
      for(int i=0;i<n;i++){
        if(speed>piles[i])count++;
        else if(piles[i] % speed==0) count= count + piles[i]/speed;
        else count+= piles[i]/speed + 1;
      }

      if(count>h) return false;
      else return true;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int mx=-1;
        for(int i=0;i<n;i++){
            if(piles[i]>mx)
            mx=piles[i];
        }
        int hi=mx;
        int lo=1;
        int mid;
        int ans;
        while(hi>=lo){
            mid=lo+(hi-lo)/2;
            if(checks(mid,piles,h)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};