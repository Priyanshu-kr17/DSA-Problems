class Solution {
public:
    void servers(int i, int j, vector<vector<int>>& grid, vector<vector<bool>> &IsCounted, int &ans){
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>> q;
        q.push({i,j});
        bool check=false;

        while(!q.empty()){
          
            int row = q.front().first;
            int col = q.front().second;
            IsCounted[row][col]=1;
            q.pop();
            // row check
            for(int i=row;i<m;i++){
                if(grid[i][col]!=0 && !IsCounted[i][col]){
                    ans++;
                    q.push({i,col});
                   check=true;
                }
            }

            // col check
            for(int i=col;i<n;i++){
                if(grid[row][i]!=0 && !IsCounted[row][i]){
                    ans++;
                    q.push({row,i});
                    check=true;
                }
            }
            
        }
        if(check) ans++;
    }
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>>  IsCounted(m,vector<bool>(n,0));
        int ans=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0 && !IsCounted[i][j]){

                    servers(i,j,grid,IsCounted,ans);
                }
            }
        }
        return ans;
    }
};