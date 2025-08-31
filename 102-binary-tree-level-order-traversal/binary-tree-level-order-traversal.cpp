/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void trav(TreeNode* root, vector<vector<int>>& ans) {
        queue<TreeNode*> q;
        if(root==NULL) return;
        q.push(root);
        

        while (!q.empty()) {

            int n = q.size();
            vector<int> v;
            for (int i = 0; i < n; i++) {
                v.push_back(q.front()->val);
                
                if (q.front()->left!=NULL)
                    q.push(q.front()->left);
                if (q.front()->right!=NULL)
                    q.push(q.front()->right);

                q.pop();
            }
            ans.push_back(v);
        }
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        trav(root, ans);
        return ans;
    }
};