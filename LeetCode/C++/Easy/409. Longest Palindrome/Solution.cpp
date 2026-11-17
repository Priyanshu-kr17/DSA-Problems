class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();

        unordered_map<char,int> letter;
        int len=0;

        for(int i=0;i<n;i++){
            letter[s[i]]++;
        }

        for(auto x: letter){
            len+= x.second/2;
        }
        if(len*2==n) return n;
        return len*2+1;
    }
};