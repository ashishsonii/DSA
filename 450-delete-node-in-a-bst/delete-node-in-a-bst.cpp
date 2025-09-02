
class Solution {
public:


    TreeNode* finddmx(TreeNode* root){
        while(root->right){
        root=root->right;
        }
        return root;

    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return NULL;
        
        if(root->val>key){
            root->left= deleteNode(root->left,key);
            
        }
        else if(root->val<key){
            root->right= deleteNode(root->right,key);
            
        }
        else{
            if(!root->left && !root->right){
                return NULL;
            }
           if(!root->left && root->right){
                return root->right;
            }
            if(root->left && !root->right){
                return root->left;
            }
           
               else { TreeNode* mx=finddmx(root->left);
                root->val=mx->val;
                root->left=deleteNode(root->left,mx->val);}
            
        }
        return root;
        
       

        }
        
    
};