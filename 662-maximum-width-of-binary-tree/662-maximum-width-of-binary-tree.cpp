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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push(make_pair(root,0));
        int ans=0;
        while(!q.empty()){
            int sz=q.size();
            int start =q.front().second;
            int end = q.back().second;
            ans=max(ans,end-start+1);
            for(int i=0;i<sz;i++){
                TreeNode* temp = q.front().first;
                long long int cnt=q.front().second-start;
                q.pop();
                if(temp->left)q.push({temp->left,2*cnt+1});
                if(temp->right)q.push({temp->right,2*cnt+2});
            }
            
        }
        return ans;
    }
};