class Solution {
public:
    int arrangeCoins(int n) {
        int stairs=0;

        int lo=0;
        int hi = n/2;

        while(hi>=lo){
            int mid = lo+(hi-lo)/2;

            if((mid*(mid+1))>=n) hi = mid-1;
            else lo = mid+1;
        }

        if(lo*(lo+1)>=n) return lo;
        return hi;
        
    }
};