class Solution {
public:
    bool twosum(int idx,vector<pair<int,int>> &v, vector<int>& nums, int target){
        unordered_set<int> st;
        bool flag = false;
        for(int i=idx;i<nums.size();i++){
        
            if(st.find(nums[i]) != st.end()) {
            if(v.empty() || v.back().second != nums[i]) {
                v.push_back({target - nums[i], nums[i]});
                flag = true;
            }   
}

            st.insert(target-nums[i]);
        }
        return flag==true;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i > 0 && nums[i] == nums[i-1])
            continue;
            vector<pair<int,int>> temp;
            if(twosum(i+1,temp,nums,-1*nums[i])) {
                for(int j=0;j<temp.size();j++){
                    
                    ans.push_back({nums[i],temp[j].first,temp[j].second});
                }
            }
        }
        return ans;
    }
};