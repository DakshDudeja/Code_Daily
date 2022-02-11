// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

    // Function to detect cycle in a directed graph.
   class Solution{
   public:
      bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>Indegree(V,0);
        for (int i = 0; i <V; i++)
      {
        for(int it : adj[i]){
          Indegree[it]++;
      }
      }
        queue<int>q;
        int ans = 0;
        unordered_set<int>visited;
        for (int i=0;i<V;i++)
        {
            if(Indegree[i]==0){
             q.push(i);
             ans+=1;
            }
        }
        while(!q.empty())
        {
            int currvertex = q.front();
            q.pop();
            if(visited.find(currvertex)!=visited.end()) 
              continue;
            visited.insert(currvertex);
            for(int neighbour:adj[currvertex])
            {
                Indegree[neighbour]-=1;
                if(Indegree[neighbour]==0)
                 {
                     q.push(neighbour);
                     ans+=1;
                 }
            }
        }
        if(ans==V)return false;
        else return true;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends