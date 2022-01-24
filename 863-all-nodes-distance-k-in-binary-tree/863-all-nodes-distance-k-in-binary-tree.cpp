
class Solution {
public:
    void addMap(TreeNode* currnode, TreeNode* currparent,unordered_map<TreeNode*,TreeNode*>&parentmap){
        if(currnode==NULL)
            return;
        parentmap[currnode]=currparent;
        addMap(currnode->left,currnode,parentmap);
        addMap(currnode->right,currnode,parentmap);
        return;
    }
    void printkdistance(TreeNode* currnode, int                                    k,set<TreeNode*>&s,unordered_map<TreeNode*,TreeNode*>&parentmap,vector<int>&ans)
    {
        if(currnode == NULL || s.find(currnode)!=s.end()|| k<0) 
            return;
        
        s.insert(currnode);     
        
        if(k==0)     
        {
            ans.push_back(currnode->val);
            return;
        }
        
        printkdistance(currnode->left,k-1,s,parentmap,ans);   // call left child
        printkdistance(currnode->right,k-1,s,parentmap,ans);   // call right child
        printkdistance(parentmap[currnode],k-1,s,parentmap,ans);  // call the parent 
        return;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        set<TreeNode*>s;
        unordered_map<TreeNode*,TreeNode*>parentmap;
        addMap(root,NULL,parentmap);
        printkdistance(target,k,s,parentmap,ans);
        return ans;

    }
};