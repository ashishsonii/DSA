
class Solution {
public:

    int dep(TreeNode* root,int d,int x){
        if(root==NULL) return 0;
       
        if(root-> val ==x) return d;
       
        return max(dep(root->right,d+1,x), dep(root->left,d+1,x));
    }
    TreeNode* check(TreeNode* root, int x){
        if(root==NULL) return NULL;
        if(root->left!=NULL && root->left->val==x){
            return root;
        }
        if(root->right && root->right->val==x){
            return root;
        }
        TreeNode* leftans=check(root->left,x);
        if(leftans) return leftans;
        return check(root->right,x);
        

        
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(dep(root,0,x)!=dep(root,0,y)) return false;
        if(check(root,x)->val==check(root,y)->val) return false;
        return true;
        
        
    }
};