class Solution {
public:
    int arrangeCoins(int n) {
        long long t = (long long)2*(long long)n;
        long long x = sqrt(t);
        if(x*(x+1)==t) return (int)x;
        return (int)x-1;     
    }
};