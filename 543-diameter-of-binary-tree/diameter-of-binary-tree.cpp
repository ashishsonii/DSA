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
  int mx=0;


    int find(TreeNode* root){
      if(root==NULL) return 0;
      return 1+max(find(root->left),find(root->right));
      
      
      


    }

    int diameterOfBinaryTree(TreeNode* root) {
    if(root==NULL) return 0;
    
    int x= find(root->left);
    int y= find(root->right);
    mx= max(x+y,mx);
    diameterOfBinaryTree( root->left);
    diameterOfBinaryTree( root->right);
    return mx;



        
        
    }
};