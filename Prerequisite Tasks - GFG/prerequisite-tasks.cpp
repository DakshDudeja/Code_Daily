// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    vector<vector<int>>graph(N);
	    vector<int>indegree(N);
	    for(auto it:pre){
	        int u =it.first;
	        int v=it.second;
	        graph[u].push_back(v);
	        indegree[v]++;
	    }
	    int ans=0;
	    queue<int>q;
	    for(int i=0;i<indegree.size();i++){
	        if(indegree[i]==0){
	            q.push(i);
	            ans++;
	        }
	    }
	    while(!q.empty()){
	        int currVtx = q.front();
	        q.pop();
	        for(auto vtx:graph[currVtx]){
	            indegree[vtx]--;
	            if(indegree[vtx]==0){
	                q.push(vtx);
	                ans++;
	            }
	        }
	    }
	    return ans==indegree.size();
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends