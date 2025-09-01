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


    void help(TreeNode* root,unordered_map<int,int>&mp){
        if(root==NULL) return;
        mp[root->val]++;
        help(root->left,mp);
        help(root->right,mp);

    }
    vector<int> findMode(TreeNode* root) {

        unordered_map<int,int>mp;        
        help(root,mp);
        int mx=0;
        vector<int>v;
        for(auto x:mp){
            mx=max(x.second,mx);
        }
        for(auto x:mp){
           if(x.second==mx)v.push_back(x.first);
        }
        return v;
        
    }
};