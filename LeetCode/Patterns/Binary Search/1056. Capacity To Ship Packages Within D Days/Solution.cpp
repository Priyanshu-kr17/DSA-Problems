class Solution {
    bool checks(int mid,vector<int>& weights, int days){
     int n=weights.size();
     int m=mid;
     int count=1;  
     for(int i=0;i<n;i++){ 
     if(m>=weights[i]){
        m-=weights[i];
     }
     else{
        count++;
        m=mid;
        m-=weights[i];
     }}
     if(count<=days) return true;
     else return false;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int n=weights.size();
       int sum=0;
       int max=INT_MIN;
       for(int i=0;i<n;i++){
        if(weights[i]>max)
        max=weights[i];
        sum+=weights[i];
       } 
       int hi=sum;
       int lo=max;
       int minc=sum;
       while(hi>=lo){
       int mid=lo+(hi-lo)/2;
        if(checks(mid,weights,days)){
            minc=mid;
            hi=mid-1;
        }
        else lo=mid+1;
       }
       return minc;
    }
};