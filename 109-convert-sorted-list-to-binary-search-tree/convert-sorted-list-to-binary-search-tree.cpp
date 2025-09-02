/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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

    ListNode* mid(ListNode* head,ListNode* last){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=last && fast->next!=last){
            
            
            fast=fast->next->next;
            
            slow=slow->next;
        }
        return slow;

    }
   
    TreeNode* build(ListNode* head,ListNode* last){
        if(head==last) return NULL;
        ListNode* midd= mid(head,last);
        
        
        TreeNode* root=new TreeNode(midd->val);
        root->left=build(head,midd);
        root->right=build(midd->next,last);
        return root;


    }


    TreeNode* sortedListToBST(ListNode* head) {
        return build(head,NULL);
        
    }
};