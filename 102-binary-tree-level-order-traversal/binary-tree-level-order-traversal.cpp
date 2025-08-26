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

    void trav(TreeNode* root ,int l,map<int ,vector<int>> &mp){
        if(root==NULL) return;
        mp[l].push_back(root->val);
        trav(root->left,l+1,mp);
        trav(root->right,l+1,mp);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {

        map<int ,vector<int>>mp;
        vector<vector<int>> ans;
        trav(root,0,mp);
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;


        
    }
};