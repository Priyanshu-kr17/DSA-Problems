class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=0;
        int j=0;
        if(n==0) return;

        while(i<m){
            if(nums1[i]!=0 &&  nums1[i]>nums2[j])
            swap(nums1[i],nums2[j]);
            i++;           
        }

        while(i<nums1.size()){
            nums1[i]=nums2[j];
            i++;
            j++;
        }
        return;
    }
};