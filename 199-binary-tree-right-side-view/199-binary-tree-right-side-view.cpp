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
vector<int>res;
void solve(TreeNode *root,int idx,unordered_map<int,int>&mp){
        if(root == NULL) return;

    if(mp.find(idx)==mp.end()){
        mp[idx]=1;
        res.push_back(root->val);
    }
    solve(root->right,idx+1,mp);
    solve(root->left,idx+1,mp);
     return;
}
    vector<int> rightSideView(TreeNode* root) {
    unordered_map<int,int>mp;
    solve(root,1,mp);
    return res;
    }
};