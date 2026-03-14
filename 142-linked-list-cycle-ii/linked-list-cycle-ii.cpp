/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
    //    unordered_set<ListNode*> st;
    //    ListNode* temp=head;
    //      while(temp){
    //         if(st.find(temp)!=st.end()) return temp;
            
    //         st.insert(temp);
    //         temp=temp->next;
    //     }
    // return NULL;


    ListNode* slow=head;
    ListNode* fast=head;
    ListNode* first=head;
    while(fast && fast->next){
        
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast) break;
    }
    if(!fast || !fast->next) return NULL;

    while(first!=slow){
        first=first->next;
        slow=slow->next;
    }
    return first;









        
    }
};