class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> rows;
        unordered_set<int> cols;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }

        // making rows zero
        for(auto ele: rows){
            for(int i=0;i<m;i++){
                matrix[ele][i]=0;
            }
        }

        // making columnrs zero
        for(auto ele: cols){
            for(int i=0;i<n;i++){
                matrix[i][ele]=0;
            }
        }
        return;
    }
};