class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m= matrix.size();
        int n=matrix[0].size();
        // bool flag=false;
        for(int i=0;i<m;i++){
            int hi=n-1;
            int lo=0;
            while(hi>=lo){
                int mid=lo+(hi-lo)/2;
                if(matrix[i][mid]==target){
                    //  flag=true;   
                     return true;}
                else if(matrix[i][mid]>target) hi=mid-1;
                else lo=mid+1;

            }
     
        }
        // if(flag==false)
         return false;
    }

};