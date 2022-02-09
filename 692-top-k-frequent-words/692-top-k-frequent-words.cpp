class Solution {
public:
    struct Node{
        string s;                           //i:2 , love-2 , leetcode-1, coding-1
        int freq;
        Node(string s1,int b){
            s=s1;
            freq=b;
        }
    };
    struct compare{
        bool operator()(Node &s1,Node &s2){
            if(s1.freq==s2.freq) return s1.s > s2.s;
            
            return s1.freq < s2.freq;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto it:words){
            mp[it]++;
        }
        priority_queue<Node,vector<Node>,compare>heap;
        for(auto it:mp)
            heap.push(Node(it.first,it.second));
        
        vector<string>ans;
        while(k--){
            Node temp=heap.top();
            heap.pop();
            ans.push_back(temp.s);
        }
        return ans;
    }
};