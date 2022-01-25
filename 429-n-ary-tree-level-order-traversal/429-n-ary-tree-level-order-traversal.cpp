/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        if(root==NULL) return res;

        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>ans;
            int currsize=q.size();
            for(int i=0;i<currsize;i++){
                Node*temp = q.front();
                q.pop();
                ans.push_back(temp->val);
                
                for(auto child:temp->children){
                    q.push(child);
                }
            }
              res.push_back(ans);    

        }
        
        return res;
    }
};