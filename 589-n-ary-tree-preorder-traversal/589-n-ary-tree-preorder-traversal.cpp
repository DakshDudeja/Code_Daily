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
    vector<int> preorder(Node* root) {
       vector<int>res;
        stack<Node*>st;
        if(root==NULL) return res;
        st.push(root);
        while(!st.empty()){
            Node* temp = st.top();
            st.pop();
            res.push_back(temp->val);
            vector<Node*>child = temp->children;
                int n=child.size();
            for(int i=n-1;i>=0;i--){
                st.push(child[i]);
            }
          
            
        }
        return res;
    }
};