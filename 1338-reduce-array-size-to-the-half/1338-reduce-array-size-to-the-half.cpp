class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        int n=arr.size();
        int cnt=0,removed=0;
        
        while (removed < n/2) {
            removed += pq.top().first;
            pq.pop();
            cnt++;
        }

        return cnt;
    }
};