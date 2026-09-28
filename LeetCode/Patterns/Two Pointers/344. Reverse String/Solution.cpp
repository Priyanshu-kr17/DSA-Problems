class Solution {
public:
    void helper(vector<char>& s, int left, int right){
        if(left>=right) return;

        swap(s[left],s[right]);
        helper(s,left+1, right-1);
     }
    void reverseString(vector<char>& s) {
        int n = s.size();
        helper(s,0,n-1);
    }
};