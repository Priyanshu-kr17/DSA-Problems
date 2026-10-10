class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        priority_queue<pair<int,int>> diffs;
        for(int i=0;i<n;i++){ // finding difference between nums1 and nums2 for every i
            diffs.push({abs(nums1[i]-nums2[i]),i});
        }

        while(k1 || k2){
            int x = diffs.top().second;
            diffs.pop();
            if(nums1[x]<nums2[x] && k1!=0){
                nums1[x]++;
                k1--;
            }
            else if(k1>0){
                nums1[x]--;
                k1--;
            }
            else if(nums1[x]>nums2[x] && k2!=0){
                nums2[x]++;
                k2--;
            }
            else if(k2>0){
                nums2[x]--;
                k2--;
            }
        }
        long long result=0;

        for(int i=0;i<n;i++){
            result+= (nums1[i]-nums2[i]) * (nums1[i]-nums2[i]);
        }
        return result;

    }
};