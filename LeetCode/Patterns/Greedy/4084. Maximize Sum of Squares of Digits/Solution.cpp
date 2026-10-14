class Solution {
public:
     string maxSumOfSquares(int num, int sum) {
        string s ="";
        if(sum>num*9) return "";
        if(sum>((num-1)*9)){
            while(sum>9){
                s+=(char)9+48;
                sum-=9;
            }
            s+= (char)sum+48;
            

        }

        else{
            while(sum>9){
                s+=(char)9+48;
                sum-=9;
            }
            s+= (char)sum+48;
            while(s.size()<num){
                s+='0';
            }
        }
        
        return s;
    }
};