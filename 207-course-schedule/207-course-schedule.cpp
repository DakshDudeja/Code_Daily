class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numCourses);
        vector<int>indegree(numCourses,0);
        for(vector<int>&arr:prerequisites){
            graph[arr[0]].push_back(arr[1]);
            indegree[arr[1]]++;
        }
        queue<int>q;
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0)
                q.push(i);
        }
        int cnt=0;
        while(!q.empty()){
            int currVtx = q.front();
            q.pop();
            cnt++;
            for(int neighbour:graph[currVtx]){
                indegree[neighbour]--;
                
                if(indegree[neighbour]==0){
                    q.push(neighbour);
                }
            }                
        }
        return cnt==numCourses;

        
    }
};