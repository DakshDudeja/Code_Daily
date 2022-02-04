class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ret;
        queue<vector<int>> q;
        int n = graph.size();
        vector<int> temp;
        temp.push_back(0);
        q.push(temp);
        while(!q.empty())
        {
            vector<int> vec = q.front();
            int curr = vec[vec.size()-1];
            if(curr == n-1)
                ret.push_back(vec);
            q.pop();
            for(int i=0;i<graph[curr].size();i++)
            {
                
                vec.push_back(graph[curr][i]);
                q.push(vec);
                vec.pop_back();
            }
        }
        return ret;
    }
};