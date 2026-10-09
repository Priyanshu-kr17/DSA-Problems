class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        int i = 0;
        int result=0;
        int count=0;

        while(i<n){
            if(s[i]=='(') {
                count++;
                i++;
            }
            else{
                if(count>0){
                    count--;
                }
                else result+=1;
                if(i<n && s[i+1]!=')'){
                    result+=1;
                    i++;
                }
                else{
                    i+=2;
                }
            }
        }

        result+= count*2;
        return result;
    }
};