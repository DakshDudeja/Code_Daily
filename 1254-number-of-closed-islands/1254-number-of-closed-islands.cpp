class Solution {
public:
    bool solve(vector<vector<int>>& grid,int i,int j,int m,int n){
        if(i<0 || j<0||i>=m||j>=n) return false;
        if(grid[i][j]==1)return true;
         
         grid[i][j]=1;
                
         bool a = solve(grid,i+1,j,m,n);
         bool b=  solve(grid,i,j+1,m,n);
         bool c =  solve(grid,i-1,j,m,n);
         bool d = solve(grid,i,j-1,m,n);
        
        return a&b&c&d;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        vector<vector<bool>>v(m,vector<bool>(n,false));
        for(int i=1;i<m-1;i++){
            for(int j=1;j<n-1;j++){
                if(grid[i][j]==0  and solve(grid,i,j,m,n)==true)
                        cnt++;
            }
        }
        return cnt;
    }
};

