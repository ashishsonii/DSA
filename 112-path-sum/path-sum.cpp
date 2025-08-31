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

    bool check(TreeNode* root, int targetSum,int sum){
        

        if(!root) return false;
         if(!root->left && !root->right){
            return sum==targetSum;
        }
       
        bool left = false, right = false;
        if (root->left) {
            left = check(root->left, targetSum, sum + root->left->val);
        }
        if (root->right) {
            right = check(root->right, targetSum, sum + root->right->val);
        }
        return left|| right;
       
       
      
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
         if(!root) return false;
         

        return check(root,targetSum,root->val);
        
    }
};