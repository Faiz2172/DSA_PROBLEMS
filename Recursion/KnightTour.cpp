class Solution {
public:
    bool isValid(vector<vector<int>>& grid, int r ,int c ,int exp_val){
        int n=grid.size();

    if(r<0 || c<0 || r>=n || c>=n || grid[r][c]!=exp_val) return false;
    if(exp_val== (n*n)-1) return true;

        bool ans1=isValid(grid,r-2,c+1,exp_val+1);
        bool ans2=isValid(grid,r-1,c+2,exp_val+1);
        bool ans3=isValid(grid,r+1,c+2,exp_val+1);
        bool ans4=isValid(grid,r+2,c+1,exp_val+1);
        bool ans5=isValid(grid,r+2,c-1,exp_val+1);
        bool ans6=isValid(grid,r+1,c-2,exp_val+1);
        bool ans7=isValid(grid,r-1,c-2,exp_val+1);
        bool ans8=isValid(grid,r-2,c-1,exp_val+1);

        return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8 ;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        if(n==0) return false;
        return isValid(grid,0,0,0);
    }
};
