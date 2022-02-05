class Solution {
public:
    bool dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i,int j,int m,int n){
        if(i<0 || j<0 || i>=m || j>=n || grid2[i][j]==0)return true ;
        
        if(grid1[i][j]==0) return false;
        grid2[i][j]=0;
         bool a =dfs(grid1,grid2,i+1,j,m,n);
         bool b = dfs(grid1,grid2,i,j+1,m,n);
         bool c= dfs(grid1,grid2,i-1,j,m,n);
         bool  d= dfs(grid1,grid2,i,j-1,m,n);
    
        return a&b&c&d;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m=grid2.size();
        int n=grid2[0].size();
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j]==1 ){
                    if(dfs(grid1,grid2,i,j,m,n)==true)
                    cnt++;
                }
            }
        }
        return cnt;
    }
};