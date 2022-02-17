class Solution {
public:
    vector<vector<int>>ConstructGraph(int n, vector<vector<int>>&edges)  
     {
         vector<vector<int>>g(n);
        for(auto it:edges)
        {
            int v = it[0];
            int u = it[1];
            g[u].push_back(v);
        }
        return g;
     }
    vector<int> findOrder(int n, vector<vector<int>>&edges) {
        vector<vector<int>>graph = ConstructGraph(n,edges);
        unordered_set<int>visited;
        unordered_set<int>recstack;
        vector<int>Traversal;
        for(int currvertex = 0;currvertex<n;currvertex++)
        {
            if(visited.find(currvertex)!=visited.end())
                continue;
            if(isCyclic(graph,currvertex,visited,recstack,Traversal))
                return {};
        }
        reverse(Traversal.begin(),Traversal.end());
         return Traversal;
    }
    
    bool isCyclic(vector<vector<int>>&graph,int currvertex,unordered_set<int>&visited,unordered_set<int>&recstack,vector<int>&Traversal)
    {
        visited.insert(currvertex);
        recstack.insert(currvertex);
        for(int neighbour:graph[currvertex])
        {
            if(visited.find(neighbour)==visited.end())
            {
                if(isCyclic(graph,neighbour,visited,recstack,Traversal))
                    return true;
            }
            else if(recstack.find(neighbour)!=recstack.end())
                return true;
        }
        Traversal.push_back(currvertex);
        recstack.erase(currvertex);
        return false;
    }
};