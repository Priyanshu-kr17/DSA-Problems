class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums2.size()==0) return;
        int i=0;
        int j=0;
        int k=0;
        vector<int> temp(m+n);
        while(j<n&&i<m){
            if(nums1[i]<=nums2[j]) {
                temp[k]=nums1[i];
                i++;
                k++;
            }
            else{ temp[k]=nums2[j];
            k++;
            j++;}
        }
        if(i==m){
           while(j<n){
             temp[k]=nums2[j];
            j++;
            k++;
           }
        }
        else if(j==n){
           while(i<m){
             temp[k]=nums1[i];
            i++;
            k++;
        }
           }
        for(int i=0;i<m+n;i++){
            nums1[i]=temp[i];
        }
    }
};