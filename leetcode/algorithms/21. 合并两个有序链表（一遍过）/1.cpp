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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p1 = list1;
        ListNode *p2 = list2;
        ListNode *newhead = new ListNode(0);
        ListNode *r = newhead;
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
        }
        if(p2){
            r->next = p2;
        }
        return newhead->next;
    }
};