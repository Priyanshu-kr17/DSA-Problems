class Solution {
public:

    void checkIsland(vector<vector<int>>& grid,vector<vector<bool>> &isVisited, int i, int j, int &ans,const int k){
        int m = grid.size();
        int n = grid[0].size();
        queue<vector<int>> q;
        int sum=0;
        // q.insert(grid[i][j]);
        vector<int> v(3);
        v[0] = grid[i][j];
        v[1] = i;
        v[2] = j;
        q.push(v);

        while(!q.empty()){
            vector<int> x; 
            x = q.front(); q.pop();
            isVisited[x[1]][x[2]]=true;
            sum+=x[0];


            // checking all four direction
            // left
            if(j>0){
                if(!isVisited[x[1]][x[2]-1] && grid[x[1]][x[2]-1]!=0) 
                q.push({grid[x[1]][x[2]-1], x[1], x[2]-1});
            }

            // right
            if(j<m-1){
                if(!isVisited[x[1]][x[2]+1] && grid[x[1]][x[2]+1] !=0) 
                q.push({grid[x[1]][x[2]+1] , x[1], x[2]+1});
            }

            // up           
            if(i>0){
                if(!isVisited[x[1]-1][x[2]] && grid[x[1]-1][x[2]] !=0) 
                q.push({grid[x[1]-1][x[2]] , x[1]-1, x[2]});
            }

            // down
            if(i<n-1){
                if(!isVisited[x[1]][x[2]+1] && grid[x[1]][x[2]+1] !=0) 
                q.push({grid[x[1]][x[2]+1] , x[1], x[2]+1});
            }           
        }
        if(sum%k==0) ans++;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();

        int ans=0;
        vector<vector<bool>> isVisited(m,vector<bool>(n,0));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!isVisited[i][j] && grid[i][j]>0)
                checkIsland(grid,isVisited,i,j,ans,k);
            }
        }

        return ans;

    }
};