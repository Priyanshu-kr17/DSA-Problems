class Solution {
public:
    int findmiss(vector<int> &arr, int num){
        int n = arr.size();
        int lo=0;
        int hi = arr.size()-1;

        while(hi>=lo){
            int mid = lo+(hi-lo)/2;

            if(arr[mid]<num) lo=mid+1;
            else hi=mid-1;
        }

        if(lo<n) return lo;
        return arr.size();
    }
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();

        int lo = 1;
        int hi = arr[n-1]+k;

        while(hi>=lo){
            int mid = lo+(hi-lo)/2;

            int missings = mid - findmiss(arr,mid);

            if(missings==k) return mid;
            if(missings<k) lo=mid+1;
            else hi=mid-1;
        }
        return hi;

    }
};