class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
              if(grid[i][j]==1)
                {
                    ans+=4;
                    if(i-1>=0 && grid[i-1][j]==1)// check for the upward
                        ans--;
                    if(i+1<m && grid[i+1][j]==1)//check for the downward
                        ans--;
            
                    if(j-1>=0 && grid[i][j-1]==1)//check for the left
                        ans--;
                
                    if(j+1<n && grid[i][j+1]==1)// check for the right
                        ans--;
              }
            }
        }
        return ans;
    }
};