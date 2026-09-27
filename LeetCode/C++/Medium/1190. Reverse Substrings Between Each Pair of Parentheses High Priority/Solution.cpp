class Solution {
public:
    string reverseParentheses(string s) {
        int n=s.size();
        stack<string> st;

        string curr="";
        int i=0;
        while(!st.empty() || i<n){
            if(s[i]=='('){
                if(curr!=""){
                st.push(curr);
                curr="";
                }
            }
            else if(s[i]==')'){
                reverse(curr.begin(),curr.end());
                if(!st.empty()) {
                    string prev = st.top();
                    st.pop();
                    curr = prev+curr;
                }
            }
            else curr+=s[i];
            i++;
        }

        // reverse(curr.begin(),curr.end());
        return curr;

    }
};