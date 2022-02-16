class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>graph(numCourses);
        vector<int>indegree(numCourses,0);
        
        for(vector<int>&arr:prerequisites){
            graph[arr[1]].push_back(arr[0]);
            indegree[arr[0]]++;
        }
        
        queue<int>que;
        vector<int>ans;
        for(int i=0;i<numCourses;i++)
        {
            if(indegree[i]==0){
                que.push(i);
                //ans.push_back(i);
            }
        }
        int cn=0;
        while(!que.empty())
        {
            int currVtx = que.front();
            que.pop();
            //cout<<currVtx<<" ";
            for(int nbr:graph[currVtx])
            {
                indegree[nbr]--;
                
                if(indegree[nbr]==0)
                {
                    que.push(nbr);
                
                }
            }
               ans.push_back(currVtx);
               cn++;
            if(cn==numCourses){break;}
        }
        //sort(ans.begin(),ans.end());
        if(cn==numCourses){
        return ans;}
        ans.clear();
        return ans;
    }
};