class Solution {
public:
    bool dfs(vector<vector<int>>&graph ,int source,int d,vector<bool>&vis){
        if(source==d) return true;
        vis[source]=true;
        for(int i=0;i<graph[source].size();i++){
            if(vis[graph[source][i]]==false){
               if( dfs(graph,graph[source][i],d,vis) ==true) return true;}
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>graph(n);
        for(int i=0;i<edges.size();i++){
            int u =edges[i][0];
            int v =edges[i][1];
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        if(source==destination) return true;
        vector<bool>vis(n,false);
        return dfs(graph,source,destination,vis);
    }
};