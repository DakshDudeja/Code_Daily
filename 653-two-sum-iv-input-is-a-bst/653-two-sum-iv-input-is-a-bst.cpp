class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>traversal;
        InorderTraversal(root,traversal);
        int left = 0;
        int right = traversal.size()-1;
        while(left<right)
        {
            if(traversal[left]+traversal[right]==k)
                return true;
            else if(traversal[left]+traversal[right]>k)
                right--;
            else left++;
        }
        return false;
    }
    void InorderTraversal(TreeNode*root, vector<int>&ans)
    {
        if(root==NULL) return;
        InorderTraversal(root->left,ans);
        ans.push_back(root->val);
        InorderTraversal(root->right,ans);
    }
};