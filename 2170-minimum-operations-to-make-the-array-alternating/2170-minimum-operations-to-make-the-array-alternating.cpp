class Solution {
public:
    int minimumOperations(vector<int>& arr) {
        int ans=0;
        int i=0,n=arr.size();
        if(n == 1) return 0;
        unordered_map<int,int> mp1,mp2;
        priority_queue<pair<int,int>> pq1,pq2;
        
        while(i < n){
            if(i % 2 == 0) mp1[arr[i]]++;
            
            else mp2[arr[i]]++;
            
            i++;
        }
        
        int odd,even;
        
        if(n%2) even = n/2 + 1,odd = n/2;
        else even = n/2,odd = n/2;
        
        for(auto it : mp1) pq1.push({it.second,it.first});
        
        for(auto it : mp2) pq2.push({it.second,it.first});
        
        auto t1 = pq1.top(); pq1.pop();
        auto t2 = pq2.top(); pq2.pop();
            
        if(t1.second == t2.second){
            int op1 = (even - t1.first);
            if(!pq2.empty()){
                op1 += (odd - pq2.top().first);
            }else{
                op1 += odd;
            }
                
            int op2 = (odd - t2.first);
            if(!pq1.empty()){
                op2 += (even - pq1.top().first);
            }else{
                op2 += even;
            } 
                
            ans = min(op1,op2);
        }else{
            ans += (even - t1.first) + (odd - t2.first);
        }
        
        return ans;
    }
};