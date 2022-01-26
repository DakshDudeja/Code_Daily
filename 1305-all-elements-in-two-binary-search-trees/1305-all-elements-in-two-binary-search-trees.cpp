
class Solution {
public:
    vector<int>res;
    void inorder(TreeNode*root){
        if(root==NULL) return;
        
        
        inorder(root->left);
                res.push_back(root->val);

        inorder(root->right);
        
        return;
            
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1);
        inorder(root2);
        sort(res.begin(),res.end());     //either merge the arrays or use stacks but don't sort as it O(m+n)log(m+n)
        return res;
    }
};