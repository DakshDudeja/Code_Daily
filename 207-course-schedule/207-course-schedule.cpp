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
        int ans=0; //no of elements having indegree 0
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0){
                q.push(i);
                ans++;   
            }
        }
        int cnt=0;
        while(!q.empty()){
            int currVtx = q.front();
            q.pop();
            for(int neighbour:graph[currVtx]){
                indegree[neighbour]--;
                
                if(indegree[neighbour]==0){
                    q.push(neighbour);
                    ans++;
                }
            }                
        }
        return ans==indegree.size();

        
    }
};