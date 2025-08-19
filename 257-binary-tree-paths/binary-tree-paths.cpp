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
vector<string>ans;

    void path(TreeNode* root,string s){
        if(root==NULL) return;
        if(!s.empty())s+="->";
        if(root->left==NULL && root->right==NULL) {
            s+=to_string(root->val);
            ans.push_back(s);}
        
        s+=to_string(root->val);
        path(root->left,s);
        path(root->right,s);
       
    }
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        path(root,"");
        return ans;
        
    }
};