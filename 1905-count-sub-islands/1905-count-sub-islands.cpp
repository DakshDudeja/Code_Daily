class Solution {
public:
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i,int j,int m,int n,bool&flag){
        if(i<0 || j<0 || i>=m || j>=n || grid2[i][j]==0)return  ;
        
        if(grid1[i][j]==0) {
            flag=false;
        }
         grid2[i][j]=0;
         dfs(grid1,grid2,i+1,j,m,n,flag);
         dfs(grid1,grid2,i,j+1,m,n,flag);
         dfs(grid1,grid2,i-1,j,m,n,flag);
         dfs(grid1,grid2,i,j-1,m,n,flag);
    
        return;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m=grid2.size();
        int n=grid2[0].size();
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j]==1 ){
                    bool flag=true;
                    dfs(grid1,grid2,i,j,m,n,flag);
                    if(flag)
                    cnt++;
                }
            }
        }
        return cnt;
    }
};