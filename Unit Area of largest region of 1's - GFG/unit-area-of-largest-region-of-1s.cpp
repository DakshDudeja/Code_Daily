// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int count=0;
    int dfs(int i,int j,int m,int n,vector<vector<int>>& grid){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0) return 0;
        grid[i][j]=0;
        int a=dfs(i,j-1,m,n,grid);
        int b=dfs(i,j+1,m,n,grid);
        int c=dfs(i-1,j,m,n,grid);
        int d=dfs(i+1,j,m,n,grid);
        int e=dfs(i-1,j-1,m,n,grid);
        int f=dfs(i-1,j+1,m,n,grid);
        int g=dfs(i+1,j-1,m,n,grid);
        int h=dfs(i+1,j+1,m,n,grid);
        return 1+a+b+c+d+e+f+g+h;
    }
    int findMaxArea(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int cnt = dfs(i,j,m,n,grid);
                    ans=max(ans,cnt);}
            }
        }
        return ans;
    }
    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends