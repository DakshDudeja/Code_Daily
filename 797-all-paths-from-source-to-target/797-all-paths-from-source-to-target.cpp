class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>tmp;
        tmp.push_back(0);
        vector<vector<int>>res;
        queue<vector<int>> q;
        q.push(tmp);
        while(!q.empty()){
            tmp = q.front();
            q.pop();
            int currNode = tmp.back();
            
            if(currNode==n-1){
                res.push_back(tmp);
            } 
            for(auto it:graph[currNode]){
                vector<int>v(tmp);
                v.push_back(it);
                q.push(v);
            }
        }
    
        return res;
    }
};