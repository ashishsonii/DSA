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

    TreeNode* create(vector<int>& pre,int prlo,int prhi, vector<int>& po,int polo,int pohi){
        if(prlo>prhi) return NULL;
        

        TreeNode* root=new TreeNode(pre[prlo]);
        if(prlo==prhi) return root;

        int i=pohi;
        while(i>=polo && po[i]!=pre[prlo+1]){i--;}
        if(i==-1) return root;
        
        root->left=create(pre,prlo+1,prlo+1+(i-polo),po,polo,i);
        root->right=create(pre,prlo+2+(i-polo),prhi,po,i+1,pohi-1);
        return root;


    }

    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& po) {
        int n=po.size();
        return create(pre,0,n-1,po,0,n-1);
       
        }
        
    
};