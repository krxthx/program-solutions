// Check for BST 
// GFG
// Given the root of a binary tree. Check whether it is a BST or not.
// Note: We are considering that BSTs can not contain duplicate Nodes.
// A BST is defined as follows:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.

void inorder(Node* root,vector<int> &v){
        if(root==NULL){
            return ;
        }
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    bool isBST(Node* root) 
    {
        // Your code here
        vector<int> v;
        inorder(root,v);
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]){
                return 0;
            }
        }
        return 1;
    }
