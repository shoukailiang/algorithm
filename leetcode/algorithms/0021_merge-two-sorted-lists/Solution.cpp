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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* newHead = new ListNode(0);
        ListNode* r = newHead;
        while(p1&&p2){
            if(p1->val<p2->val){
                r->next = p1;
                r=r->next;
                p1=p1->next;
            }else{
                r->next = p2;
                r=r->next;
                p2=p2->next;
            }
        }
        if(p1){
            r->next = p1;
        }else{
            r->next = p2;
        }
        return newHead->next;
        
    }
};