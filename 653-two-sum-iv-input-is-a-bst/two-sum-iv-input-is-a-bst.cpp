
class Solution {
public:

   void helper(TreeNode* root,  vector<int> &ans){
        if(!root) return;
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        helper(root,ans);
        int i=0;
        int n=ans.size();
        int j=n-1;
        while(i<j){
            if(ans[i]+ans[j]==k) return true;
            if(ans[i]+ans[j]>k) j--;
            else i++;
        }
        return false;
        
    }
};