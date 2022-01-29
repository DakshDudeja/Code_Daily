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
    void solve(TreeNode* root){
        if(root==NULL) return;
        solve(root->left);
        res.push_back(root->val);
        solve(root->right);
        return;
    }
    int kthSmallest(TreeNode* root, int k) {
        solve(root);
        for(int i=0;i<res.size();i++){
            if(i+1==k)
                return res[i];
        }
        return 0;
    }
};