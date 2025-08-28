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
    vector<vector<int>> ans;

    void help(TreeNode* root,vector<int> v){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            v.push_back(root->val);
            ans.push_back(v);
        }
        v.push_back(root->val);
        help(root->left,v);
        help(root->right,v);

    }





    int sumNumbers(TreeNode* root) {
        int tt=0;
        vector<int> v;
        
        help(root,v);
        int n=ans.size();
        for(int i=0; i<n; i++){
            int x=0;
            for(int j=0;j<ans[i].size(); j++){
                x=x*10;
                x+=ans[i][j];

                
            }
            tt+=x;
        }
        return tt;
        
    }
};