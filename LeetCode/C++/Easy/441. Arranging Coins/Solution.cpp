class Solution {
public:
    int arrangeCoins(int n) {
        

        long long  lo=1;
        long long hi = n;

        while(hi>=lo){
            long long mid = lo+(hi-lo)/2;
            if((mid*(mid+1))/2==n) return (int)mid;

            if((mid*(mid+1))/2>n) hi = mid-1;
            else lo = mid+1;
        }

        if(hi*(hi+1)/2<n) return (int)hi;
        return (int)lo;
      
    }
};