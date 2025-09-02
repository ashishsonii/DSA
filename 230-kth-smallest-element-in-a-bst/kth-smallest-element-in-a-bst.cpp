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
    
    int findd(TreeNode* root, int k,int &c){
        if(!root) return -1;
       
       int left=findd(root->left,k,c);
       c++;
       if(left!=-1) return left;
      
       if(c==k) return root->val;
       return findd(root->right,k,c);
        
        
       
       
    }


    int kthSmallest(TreeNode* root, int k) {
        int c=0;
        return findd(root,k,c);

        
    }
};