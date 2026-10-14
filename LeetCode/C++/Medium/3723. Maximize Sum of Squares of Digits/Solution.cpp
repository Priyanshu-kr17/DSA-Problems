class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s ="";
        if(sum>num*9) return "";
        if(sum>((num-1)*9)){
            int rem = sum%num;
            int quo = sum/num;
            int x = 0;
            
            while(num>1){
                x= x*10 + quo;
                s+= (char)quo+48;
                num--;
            }
            x = x*10 +(quo+rem) ;
            s+= (char)quo+rem+48;
            reverse(s.begin(),s.end());
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