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

   
    bool ispresent(TreeNode* root, TreeNode* p){
        if(root==NULL) return false;


        if(root==p) return true;
       return  ispresent(root->left,p) || ispresent(root->right,p);
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root==p ||root==q) return root;


        bool leftq=ispresent(root->left,q);
        bool rightq=ispresent(root->right,q);
        


        bool leftp=ispresent(root->left,p);
        bool rightp= ispresent(root->right,p);
        
        if((leftq && rightp)||(rightq && leftp)) return root;

        TreeNode* left=(lowestCommonAncestor( root->left,  p,  q));
        if(left) return left;
        return lowestCommonAncestor( root->right,  p,  q);
        
        

        



       
        
    }
};