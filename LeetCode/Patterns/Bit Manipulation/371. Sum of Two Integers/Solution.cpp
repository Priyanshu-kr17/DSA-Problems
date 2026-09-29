class Solution {
public:
    int getSum(int a, int b) {
        int result=0;
        
        int carry=0;
        for(int i=0;i<32;i++){
            int num = (a&1) ^ (b&1) ^ carry;

            result  = result | (num<<i);

            if( ((a&1) &(b&1)) || ((b&1) & carry) || ((a&1) & carry)){
                carry = 1;
            }
            else carry=0;

            a = a>>1;
            b = b>>1;
            
        }

        return result;
        
    }
};