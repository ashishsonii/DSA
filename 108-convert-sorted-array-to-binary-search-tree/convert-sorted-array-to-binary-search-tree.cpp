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

   TreeNode* Build(vector<int>& nums,int l,int r){
        if(l>r) return NULL;
        int mid=l+(r-l)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=Build(nums,l,mid-1);
        root->right=Build(nums,mid+1,r);
        return root;
    }




    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        if(nums.size()==0) return NULL;
        int n=nums.size();
        int l=0;
        int r=n-1;
        


        return Build(nums,l,r);
    }
};