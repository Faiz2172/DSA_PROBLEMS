
class Solution {
  public:
    bool dfs(vector<vector<int>>& grid,int r,int c,vector<vector<bool>>& visited){
        //base cases
        int m=grid.size();
        int n=grid[0].size();
        if(r<0 || c<0 || r>=m || c>=n) return false;
        if(grid[r][c]==0 || visited[r][c]==true) return false;
        if(grid[r][c]==2) return true;
        
        visited[r][c] =true;
        if(dfs(grid,r-1,c,visited))return true; //Up
        if(dfs(grid,r+1,c,visited))return true; //Down
        if(dfs(grid,r,c-1,visited))return true; //left
        if(dfs(grid,r,c+1,visited))return true; //Right
        
        return false;
        
    }
    // Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) {
        // code here
        int m=grid.size();
        int n=grid[0].size();
        int startRow=-1;
        int startCol=-1;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    startRow=i;
                    startCol=j;
                    break;
                }
            }
        }
        if(startRow==-1 || startCol==-1 ) return false; 
        vector<vector<bool>>visited(n,vector<bool>(n,false));
        
        return dfs(grid,startRow,startCol,visited);
    }
};
