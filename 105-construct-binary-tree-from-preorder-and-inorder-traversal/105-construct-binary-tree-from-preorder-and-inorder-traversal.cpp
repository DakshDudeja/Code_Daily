
class Solution {
public:
    TreeNode* solve(vector<int>&preorder,int preStart,int preEnd,vector<int>&inorder,int inStart,int inEnd ,map<int,int>&mp){
        
        if(preStart>preEnd and inStart > inEnd) return NULL;
        TreeNode* root= new TreeNode (preorder[preStart]);
        
        int numsLeft =mp[root->val]-inStart;
        
        root->left = solve(preorder,preStart+1,preStart+numsLeft,inorder,inStart,mp[root->val]-1,mp); 
            root->right = solve(preorder,preStart+numsLeft+1,preEnd,inorder,mp[root->val]+1,inEnd,mp);
        
        return root;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;
        
        TreeNode* root = solve(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mp);
        
        return root;
        // preorder[0]= new TreeNode*root;
        // loop (0,  mp[root->val]);
        // loop (mp[root->val],end);
    }
};

// class Solution {
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         map<int, int> inMap; 

//         for(int i = 0; i < inorder.size(); i++) {
//             inMap[inorder[i]] = i;
//         }

//         TreeNode* root = buildTree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, inMap);
//         return root;
//     }
//    TreeNode* buildTree(vector<int>& preorder, int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd, map<int, int> &inMap) {
//         if(preStart > preEnd || inStart > inEnd) return NULL;

//         TreeNode* root = new TreeNode(preorder[preStart]);
//         int inRoot = inMap[root->val];
//         int numsLeft = inRoot - inStart;

//         root->left = buildTree(preorder, preStart + 1, preStart + numsLeft, inorder, inStart, inRoot - 1, inMap);
//         root->right = buildTree(preorder, preStart + numsLeft + 1, preEnd, inorder, inRoot + 1, inEnd, inMap);

//         return root;
//     }
// };