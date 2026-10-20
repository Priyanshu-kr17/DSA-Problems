class Solution {
public:
    int arrangeCoins(int n) {
        int stairs=0;

        int level=1;

        while(n){
            if(n<level) return stairs;
            n=n-level;
            level++;
            stairs++;
        }
        return stairs;
    }
};