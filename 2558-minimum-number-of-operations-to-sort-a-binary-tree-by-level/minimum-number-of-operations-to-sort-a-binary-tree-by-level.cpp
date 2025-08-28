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
    int op=0;

    void help(TreeNode* root, int l){
        if(root==NULL) return;
        mp[l].push_back(root->val);
        help(root->left,l+1);
        help(root->right,l+1);
    }

    void check(vector<pair<int,int>> v){
         
        for(int i=0; i<v.size(); i++){
            if(v[i].second==i) continue;
            else{
                swap(v[i],v[v[i].second]);
                i--;
                op++;
            }
        }
        
    }



    int minimumOperations(TreeNode* root) {
        help(root,0);
        
        for(auto x:mp){
           vector<pair<int,int>> v;
            for (int i = 0; i < x.second.size(); i++) {
            v.push_back({x.second[i], i}); 
        }
            sort(v.begin(),v.end());
           
            check(v);
        }
        return op;
        
    }
};