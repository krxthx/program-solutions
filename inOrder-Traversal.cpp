class Solution {
  public:
  
  void inOrder(Node* root, vector<int> &v){
      if(root!=NULL){inOrder(root->left,v);
      v.push_back(root->data);
      inOrder(root->right,v);
     }  
  }
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        vector<int> v;
        inOrder(root, v);
        return v;
    }
};
