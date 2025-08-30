/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    int l(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(l(root->left),l(root->right));
    }
    bool ispresent(TreeNode* root, TreeNode* p){
        if(root==NULL) return false;


        if(root==p) return true;
       return  ispresent(root->left,p) || ispresent(root->right,p);
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
       
        if(root==p || root==q) return root;
        TreeNode* left=lowestCommonAncestor( root->left,  p,  q);
        TreeNode* right=lowestCommonAncestor( root->right,  p,  q);
        if(!left || !right){
            if(right) return right;
            return left;
        }
        if(right && left) return root;
        
        return root;
        

        



       
        
    }
};