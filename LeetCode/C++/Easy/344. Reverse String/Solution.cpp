class Solution {
public:
    void helper(int n, vector<char>& s,const int k, const int x){
        if(n==k) return;

        swap(s[n],s[x-n]);
        helper(n-1,s,k,x);
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        int k;
        if(n%2==0) k= n/2+1;
        else k = n/2;
        helper(n-1, s,k,n-1);
    }
};