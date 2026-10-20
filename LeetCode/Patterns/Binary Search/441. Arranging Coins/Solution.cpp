class Solution {
public:
    int arrangeCoins(int n) {
        int stairs=0;

        int lo=1;
        int hi = n;

        while(hi>=lo){
            long long mid = lo+(hi-lo)/2;
            if((mid*(mid+1))/2==n) return mid;

            if((mid*(mid+1))/2>n) hi = mid-1;
            else lo = mid+1;
        }

        if(hi*(hi+1)/2<n) return hi;
        return lo;
      
    }
};