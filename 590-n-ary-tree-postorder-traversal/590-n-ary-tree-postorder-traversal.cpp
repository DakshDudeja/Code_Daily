/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
     vector<int>res;
    void postOrder(Node* root){
        if(!root) return;
        for(Node* child:root->children){
            postOrder(child);
        }
                res.push_back(root->val);

    
        return;
    }
    vector<int> postorder(Node* root) {
        postOrder(root);
        return res;
    }
};