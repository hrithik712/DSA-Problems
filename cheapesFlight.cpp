class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int, int>> q;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if((i==0 || i==n-1 || j==0 || j==m-1) 
                && grid[i][j] == 1){
                    grid[i][j] = -1;
                    q.push({i, j});
                }
            }
        }
        
        while(!q.empty()){
            auto front = q.front();
            q.pop();
            
            int x=front.first;
            int y=front.second;
            
            int dx[4]={0, -1, 0, 1};
            int dy[4]={-1, 0, 1, 0};
            
            for(int i=0; i<4; i++){
                int nx=x+dx[i], ny=y+dy[i];
                if(nx >= 0 && nx < n && ny >= 0 && 
                ny < m && grid[nx][ny] == 1){
                    q.push({nx, ny});
                    grid[nx][ny] = -1;
                }
            }
        }
        
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j]==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};