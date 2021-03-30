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
    int getDecimalValue(ListNode* head) {
        ListNode *p = head;
        int b=0;
        while(p){
            b = b*2+p->val;
            p = p->next;
        }
        return b;
    }
};