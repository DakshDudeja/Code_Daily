class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>res;
        queue<pair<TreeNode*,int>>q;
        map<int,vector<int>>mp; 
        q.push({root,0});
        while(!q.empty()){
            multiset<pair<int, int> > tmp;
            int currSize= q.size();
            for(int i=0;i<currSize;i++){
            TreeNode* temp = q.front().first;
            int currdist = q.front().second;
            q.pop();
            
            //mp[currdist].push_back(temp->val);
            tmp.insert({currdist,temp->val});
            if(temp->left)q.push({temp->left,currdist-1});
            if(temp->right)q.push({temp->right,currdist+1});
            }
            
            for(auto p : tmp) mp[p.first].push_back(p.second);
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            res.push_back(it->second);
        }
        return res;
    }
};