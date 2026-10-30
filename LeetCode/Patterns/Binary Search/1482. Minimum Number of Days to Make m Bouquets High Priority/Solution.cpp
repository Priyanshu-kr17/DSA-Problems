class Solution {
public:
    bool check(int days, vector<int>& bloomDay, int m, int k){
        int n = bloomDay.size();
        int count=0;

        int i=0;
        while(i<n){
            int x = k;

            while(i<n && bloomDay[i]<=days && x){
                x--;
                i++;
            }
            if(x==0) count++;
            else i++;
        }
        if(count>=m) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        if(m*k>n) return -1;
        int lo = 1;
        int hi = *max_element(bloomDay.begin(), bloomDay.end());
        int ans=hi;

        while(hi>=lo){
            int mid = lo+(hi-lo)/2;

            if(check(mid,bloomDay,m,k)) {
                ans=min(ans,mid);
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;

    }
};