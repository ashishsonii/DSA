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
    vector<string> ans;
    void paths(TreeNode* root, string s){
       
        if(root==NULL)return;
        if(!s.empty()) s+="->";
        s+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            ans.push_back(s);

        }
        paths(root->left,s);
        paths(root->right,s);
        
        
        
        

    } 
    
    vector<string> binaryTreePaths(TreeNode* root) {
        paths(root,"");
        return ans;
        
    }
};