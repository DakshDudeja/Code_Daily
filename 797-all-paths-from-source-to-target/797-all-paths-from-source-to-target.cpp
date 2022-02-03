class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        int n = graph.size();
        vector<bool>visited(n);
        vector<int>vec;
        SourcetoTarget(graph,0,visited,n,vec,ans);
        return ans;
    }
    void SourcetoTarget(vector<vector<int>>&graph,int currnode,vector<bool>&visited,int n, vector<int>currpath,vector<vector<int>>&ans)
    {
        if(currnode == n-1){
            currpath.push_back(currnode);
            ans.push_back(currpath);
            currpath.pop_back();
            return;
        }
        if(visited[currnode] == true) return;
        
        visited[currnode] = true;
        currpath.push_back(currnode);
        
        for(auto neighbour: graph[currnode])
            SourcetoTarget(graph,neighbour,visited,n,currpath,ans);
        
        visited[currnode] = false;
        currpath.pop_back();
        return;
    }
};