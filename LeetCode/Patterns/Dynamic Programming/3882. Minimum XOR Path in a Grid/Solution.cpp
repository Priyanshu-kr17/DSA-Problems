class Solution {
public:
    int helper(int i, int j, vector<vector<int>>& grid){
        int m = grid.size();
        int n = grid[0].size();
        if(i==m-1 && j==n-1) return grid[i][j];
        if(i==m || j==n) return INT_MAX;
        
        int down = helper(i,j+1,grid);
        int right = helper(i+1,j,grid);

        return min(down^grid[i][j], right^grid[i][j]);
        
    }
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        return helper(0,0,grid);
    }
};