class Solution {
public:
    void helper(string curr,int n, vector<string>& ans, int lftbrace, int rhtbrace,int k){
        
        if(lftbrace==k && rhtbrace==k){
            ans.push_back(curr);
            return;
        }

        if(n>0)
        helper(curr+'(', n-1, ans, lftbrace+1, rhtbrace,k);
        if(lftbrace>rhtbrace)
        helper(curr+')', n, ans, lftbrace, rhtbrace+1,k);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
         helper("",n,ans,0,0,n);
         return ans;
    }
};