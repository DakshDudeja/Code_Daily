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
    int a=0;
    void solve(TreeNode* root,int x,int y,int level[2],int parents[2],int depth,TreeNode*currparent){
        if(root==NULL) return;
        
        if(root->val == x){
            level[0]=depth;
            parents[0]=currparent->val;
        }
        if( root->val == y){
              level[1]=depth;
            parents[1]=currparent->val;
        }
        solve(root->left,x,y,level,parents,depth+1,root); 
        solve(root->right,x,y,level,parents,depth+1,root);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        int level[2]={-1,-1};
        int parents[2]={-1,-1};
        solve(root,x,y,level,parents,0,new TreeNode(-1));
        if(level[0]==level[1] && parents[0]!=parents[1])
            return true;
        return false;
    }
};