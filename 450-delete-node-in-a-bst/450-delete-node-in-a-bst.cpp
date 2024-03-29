class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        if(root->val>key) 
            root->left = deleteNode(root->left,key);
        else if(root->val<key)
            root->right = deleteNode(root->right,key);
        else  // root->val == key condition 
        {
            if(root->left==NULL && root->right==NULL) 
            {
                root = NULL;
                return root;
            }
            if(root->left!=NULL && root->right==NULL) 
            {
                root = root->left;
                return root;
            }
            if(root->right!=NULL && root->left==NULL) 
            {
                root = root->right;
                return root;
            }
           
            TreeNode* tempnode = findleftmostNode(root->right);
            int temp = root->val;
            root->val = tempnode->val;
            tempnode->val = temp;
            
            root->right = deleteNode(root->right,tempnode->val);
            return root;
        }
        return root;
    }
    TreeNode* findleftmostNode(TreeNode* currnode)
    {
        while(currnode->left!=NULL)
            currnode = currnode->left;
        return currnode;
    }
};