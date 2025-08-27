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

    map<int,vector<int>> mp;

    void help(TreeNode* root, int l){
        if(root==NULL) return;
        mp[l].push_back(root->val);
        help(root->left,l+1);
        help(root->right,l+1);
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        help(root,0);

        for(auto x: mp){
            ans.push_back(x.second);

        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};