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
    ListNode* reverseList(ListNode* head) {
        ListNode *newhead = new ListNode(0);
        ListNode *p1 = head;
        ListNode *r;
        newhead->next = NULL;
        // 头插法
        while(p1){
            r = p1->next;
            p1->next = newhead->next;
            newhead->next = p1;
            p1 = r;
        }
        return newhead->next;
    }
};