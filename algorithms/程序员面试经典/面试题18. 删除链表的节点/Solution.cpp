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
    ListNode* deleteNode(ListNode* head, int val) {
        if(!head){
            return head;
        }
        if(head->val==val){
            return head->next;
        }
        ListNode *p = head;
        ListNode *r = p->next;
        while(r){
            if(r->val==val){
                p->next = r->next;
            }
            p = r;
            r = r->next;
        }
        return head;
    }
};