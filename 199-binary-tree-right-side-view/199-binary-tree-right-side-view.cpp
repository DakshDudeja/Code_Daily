/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode *root,int level,set<int>&s,vector<int>&res){
        if(root == NULL) return;

    if(s.find(level)==s.end()){
        s.insert(level);
        res.push_back(root->val);
    }
     solve(root->right,level+1,s,res);
     solve(root->left,level+1,s,res);
     return;
}
    vector<int> rightSideView(TreeNode* root) {
         vector<int>res;
   set<int>s;
    solve(root,1,s,res);
    return res;
    }
};