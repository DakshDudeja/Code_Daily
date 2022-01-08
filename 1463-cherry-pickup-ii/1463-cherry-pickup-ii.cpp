class Solution {
public:
    
    
    int dp[70][70][70];
 
    
    int recurs(vector<vector<int>>& grid, int i,int j,int j1 )
    {
       
       int i1=i;
        
        int n=grid.size();
        int n1=grid[0].size();
        
        int a=0;
        
        if(i<0||i>=n||i1<0||i1>=n||j<0||j>=n1||j1<0||j1>=n1)
        {
            return INT_MIN;
        }
        
        
        if(dp[i][j][j1]!=-1)
        {
            return dp[i][j][j1];
        }
        
        
        if(i==n-1&&i1==n-1&&j!=j1)
        {
            return grid[i][j]+grid[i1][j1];
        }
        
        if(i==n-1&&i1==n-1)
        {
            return grid[i][j];
        }
     

        else if(i==i1&&j==j1)
        {
          
      
            a=max(a,recurs(grid,i+1,j-1,j1-1)+grid[i][j]);
            a=max(a,recurs(grid,i+1,j-1,j1)+grid[i][j]);
            a=max(a,recurs(grid,i+1,j-1,j1+1)+grid[i][j]);
            
            
            a=max(a,recurs(grid,i+1,j,j1-1)+grid[i][j]);
            a=max(a,recurs(grid,i+1,j,j1)+grid[i][j]);
            a=max(a,recurs(grid,i+1,j,j1+1)+grid[i][j]);
            
            a=max(a,recurs(grid,i+1,j+1,j1-1)+grid[i][j]);
            a=max(a,recurs(grid,i+1,j+1,j1)+grid[i][j]);
            a=max(a,recurs(grid,i+1,j+1,j1+1)+grid[i][j]);
   
        
        }
             else
        { 
         
            a=max(a,recurs(grid,i+1,j-1,j1-1)+grid[i][j]+grid[i1][j1]);
            a=max(a,recurs(grid,i+1,j-1,j1)+grid[i][j]+grid[i1][j1]);
            a=max(a,recurs(grid,i+1,j-1,j1+1)+grid[i][j]+grid[i1][j1]);
            
            
            a=max(a,recurs(grid,i+1,j,j1-1)+grid[i][j]+grid[i1][j1]);
            a=max(a,recurs(grid,i+1,j,j1)+grid[i][j]+grid[i1][j1]);
            a=max(a,recurs(grid,i+1,j,j1+1)+grid[i][j]+grid[i1][j1]);
            
            a=max(a,recurs(grid,i+1,j+1,j1-1)+grid[i][j]+grid[i1][j1]);
            a=max(a,recurs(grid,i+1,j+1,j1)+grid[i][j]+grid[i1][j1]);
            a=max(a,recurs(grid,i+1,j+1,j1+1)+grid[i][j]+grid[i1][j1]);
   
        
        }
        return dp[i][j][j1]=a;
    }

    int cherryPickup(vector<vector<int>>& grid) {
      
        
 memset(dp,-1,sizeof(dp));
        
        
return recurs(grid, 0,0,grid[0].size()-1);
    }
};