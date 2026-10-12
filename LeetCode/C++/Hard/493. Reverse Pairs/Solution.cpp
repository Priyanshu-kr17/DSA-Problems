class Solution {
public:
        long long c=0;
        long long reverse(vector<int> &a,vector<int> &b){
            long long count=0;
            long long i=0;
            long long j=0;
            while(i<a.size()&&j<b.size()){
                long long x=2*(long long)b[j];
                long long y=a[i];
                if(y>x){
                    count+=(a.size()-i);
                    j++;
                }
                else i++;
            }
            return count;
        }

        void sort2array(vector<int> &a , vector<int> &b, vector<int> &sorted){
        int i = 0,j=0,k=0;
        int m= a.size(), n = b.size();

        while(i<m && j<n){
            if(a[i]<=b[j]){
                sorted[k] = a[i];
                i++;
            }
            else if(a[i]>b[j]){
                sorted[k] = b[j];
                j++;             
            }  
            k++;         
        }

        if(i==m) {
            while(j<n){
                sorted[k] = b[j];
                j++;  
                k++;
            }
        }
        else{
            while(i<m){
                sorted[k] = a[i];
                i++;  
                k++;
            }
        }
    }

    void mergeSort(vector<int> &v){
        if(v.size() <= 1) return;
        int n = v.size();
        // vector<int> firsthalf(n/2);
        // vector<int> secondhalf(n-n/2);
        // for(int i=0;i<n/2;i++){
        // firsthalf[i] = v[i];
        // }

        // for(int i=n/2;i<n;i++){
        //     secondhalf[i-n/2] = v[i];
        // }

         // OR
        vector<int> firsthalf(v.begin(), v.begin() + n/2);
        vector<int> secondhalf(v.begin() + n/2, v.end());
        mergeSort(firsthalf);
        mergeSort(secondhalf);
        c+= reverse(firsthalf,secondhalf);
        sort2array(firsthalf,secondhalf,v);
    }

    int reversePairs(vector<int>& nums) {
       
        mergeSort(nums);
        return c;
    }
};