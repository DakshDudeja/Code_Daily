class Solution {
public:
    bool solve(vector<vector<int>>& grid,int i,int j,int m,int n,vector<vector<bool>>&v){
        if(i<0 || j<0||i>=m||j>=n) return false;
        if(grid[i][j]==1)return true;
        if((i==0 || j==0 || i==m-1 || j==n-1) && grid[i][j]==0)
            return false;
         
        v[i][j]=true;
        bool a=true;
                
        if(!v[i+1][j])
         a = a & solve(grid,i+1,j,m,n,v);
        if(!v[i][j+1])
         a = a& solve(grid,i,j+1,m,n,v);
        if(!v[i-1][j])
         a = a & solve(grid,i-1,j,m,n,v);
        if(!v[i][j-1])
         a =a & solve(grid,i,j-1,m,n,v);
        return a;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        vector<vector<bool>>v(m,vector<bool>(n,false));
        for(int i=1;i<m-1;i++){
            for(int j=1;j<n-1;j++){
                if(grid[i][j]==0 and v[i][j]==false and solve(grid,i,j,m,n,v)==true)
                        cnt++;
            }
        }
        return cnt;
    }
};

