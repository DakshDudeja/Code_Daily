class Solution {
public:
    void bfs(vector<vector<char>>& grid,int i,int j,int m,int n){
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty()){
            int currR = q.front().first;
            int currC = q.front().second;
            q.pop();
            if(currR<0||currC<0 ||currR>=m||currC>=n || grid[currR][currC]=='0')continue;
            grid[currR][currC]='0';
            q.push({currR+1,currC});
            q.push({currR,currC+1});
            q.push({currR-1,currC});
            q.push({currR,currC-1});

        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                if(grid[i][j]=='1'){
                    cnt++;
                    bfs(grid,i,j,m,n);

                }
            }
        }
        return cnt;
        
    }
};