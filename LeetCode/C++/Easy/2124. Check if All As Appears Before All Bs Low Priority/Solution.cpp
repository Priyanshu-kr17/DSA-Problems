class Solution {
public:
    bool checkString(string s) {
        int n = s.length();

        int i=0;
        while(i<n && s[i]=='a'){
            i++;
        }

        while(i<n){
            if(s[i]!='b') return false;
            i++;
        }
        return true;
    }
};