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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        stack<TreeNode*>st;
        if(root==NULL) return res;
        st.push(root);
        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();
            res.push_back(temp->val);
            
            if(temp->left) st.push(temp->left);
            if(temp->right) st.push(temp->right);
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};