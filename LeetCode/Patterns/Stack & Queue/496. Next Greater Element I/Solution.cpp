class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> nextGreater(n,-1);
        stack<int> st;
        vector<int> result;

        // finding next greater element array of nums2
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums2[i]>st.top()) st.pop();
            if(!st.empty()) nextGreater[i]=st.top();
            st.push(nums2[i]);
        }

        // making a map
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        mp[nums2[i]]=nextGreater[i];

        // searching for nums1

        for(int i=0;i<nums1.size();i++){
            if(mp.find(nums1[i])!=mp.end())
            result.push_back(mp[nums1[i]]);
        }
        return result;
    }
};