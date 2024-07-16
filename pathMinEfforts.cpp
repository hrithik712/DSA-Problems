class Solution {
  public:
  bool solve(int mid,int n, int m, vector<vector<int>> &heights){
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        q.push({0,0});
        vis[0][0]=1;
        
        int dx[]={-1,0,0,1};
        int dy[]={0,1,-1,0};
        
        vector<int> ans;
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            
            if(row==n-1 && col==m-1) return true;
            
            for(int k=0;k<4;k++){
                int nr=row+dx[k];
                int nc=col+dy[k];
                
                if(nr<n && nc<m && nr>=0 && nc>=0 && !vis[nr][nc]){
                    int diff=abs(heights[row][col]-heights[nr][nc]);
                    if(diff<=mid){
                        q.push({nr,nc});
                        vis[nr][nc]=1;
                    }
                }
            }
            
        }
        return false;
        
    }
    int MinimumEffort(int rows, int columns, 
    vector<vector<int>> &heights) {
        // code here
         int n=heights.size();
        int m=heights[0].size();
        
        int dx[]={-1,0,0,1};
        int dy[]={0,1,-1,0};
        
        int maxi=INT_MIN;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                for(int k=0;k<4;k++){
                    int nr=i+dx[k];
                    int nc=j+dy[k];
                    
                    if(nr<n && nc<m && nr>=0 && nc>=0){
                        int diff=abs(heights[i][j]-heights[nr][nc]);
                        maxi=max(maxi,diff);
                    }
                }
            }
        }
        
        int low=0;
        int high=maxi;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(solve(mid,n,m,heights)) high=mid-1;
            else low=mid+1;
        }
        
        return low;
        
        
    }
};