class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int no_of_op=0;
        int no_of_clo=0;

        int i=0;
        string ans="";
        while(i<n){
            string temp="";
            if(s[i]=='(') no_of_op++;
            else no_of_clo++;
            i++;

            while(i<n && no_of_op!=no_of_clo){
                if(s[i]=='(') no_of_op++;
                else no_of_clo++;
                temp+=s[i];
                i++;              
            }
            no_of_op=0;
            no_of_clo=0;
            temp.pop_back();
            ans+= temp;
        }
        return ans;
    }
};