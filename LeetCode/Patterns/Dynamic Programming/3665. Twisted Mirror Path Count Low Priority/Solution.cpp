class Solution {
public:

    int findpath(int i, int j, vector<vector<int>>& grid, int &ans){
        int m = grid.size();
        int n = grid[0].size();
        const int MOD = 1e9 + 7;


        if(i==m-1 && j==n-1){
            return 1;
        }
        if(i>=m || j>=n) return 0;

        long long right,down;
        // moving right        
            int x = i;
            int y = j + 1;

            bool movingRight = true;

            while (x < m && y < n && grid[x][y] == 1) {
                if (movingRight) {
                    x++;              // Turn down
                }
                else {
                    y++;              // Turn right
                }

                movingRight = !movingRight;
            }

            right = findpath(x, y, grid, ans);


        // moving down        
             x = i + 1;
             y = j;

             movingRight = false;

            while (x < m && y < n && grid[x][y] == 1) {
                if (movingRight) {
                    x++;
                }
                else {
                    y++;
                }

                movingRight = !movingRight;
            }

            down = findpath(x, y, grid, ans);

        return (right + down) % MOD;
    }
    int uniquePaths(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int ans=0;

       return findpath(0,0,grid,ans);
        
    }
};