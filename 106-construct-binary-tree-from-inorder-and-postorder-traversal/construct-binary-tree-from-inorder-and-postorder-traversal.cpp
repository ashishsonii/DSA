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

    TreeNode* build(vector<int>& in,int inlo,int inhi, vector<int>& po,int polo,int pohi){
        if(polo>pohi) return NULL;
        TreeNode* root=new TreeNode(po[pohi]);
        if(polo==pohi) return root;
        int i=inlo;
        while(i<inhi && in[i]!=po[pohi]){i++;}

       root->left=build(in,inlo,i-1,po,polo,polo+i-inlo-1);
       root->right=build(in,i+1,inhi,po,polo+i-inlo,pohi-1);
       
       return root;
    } 



    TreeNode* buildTree(vector<int>& in, vector<int>& po) {
        int n=in.size();
        return build(in,0,n-1,po,0,n-1);


        
    }
};