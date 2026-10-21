class Solution {
public:
    int minOperations(string s) {
        int i;
        int n = s.size();
        int x=0;

        if(n==2){
            if(s[0]>s[1]) return -1;
            else return 0;
        }

        for(i=0;i<n;i++){
            if(i!=n-1 && s[i]>s[i+1]) break;
        }
        if(i==n) return -1;

        if(i>0){
            sort(s.begin()+i,s.end());
           x+=1;
        }
        else{
            sort(s.begin(),s.end()-1);
            x+=1;
            sort(s.begin()+1,s.end());
            x+=1;
        }
        if(s[0]>s[1]) x+=1;
        return x;
    }
};