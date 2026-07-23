class Solution {
    private:
        void bfs(vector<vector<int>>&vis,int row,int col,vector<vector<char>>&grid){
            queue<pair<int,int>>que;
            que.push({row,col});
            vis[row][col] = 1;
            int dRow[] = {-1, 0, 1, 0};
            int dCol[] = {0, 1, 0, -1};

            int n = grid.size();
            int m = grid[0].size();
            while(!que.empty()){
                int row = que.front().first;
                int col = que.front().second;
                que.pop();

                for(int i = 0; i < 4;i++){
                
                    int nrow = row + dRow[i];
                    int ncol = col + dCol[i];
                    if(nrow >= 0 && ncol >=0 && nrow < n && ncol < m && !vis[nrow][ncol] && grid[nrow][ncol] == '1'){
                        vis[nrow][ncol] = 1;
                        que.push({nrow,ncol});
             }
            }
            }
                    
                    
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt = 0;
        for(int i = 0; i < n;i++){
            for(int j = 0; j < m; j++){
                if(vis[i][j] != 1 && grid[i][j] == '1'){
                    bfs(vis,i,j,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
