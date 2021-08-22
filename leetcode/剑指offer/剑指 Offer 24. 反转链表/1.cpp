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
        if(!head) return head;
        if(!head->next) return head;
        ListNode *pre = nullptr;
        ListNode *cur = head;
        ListNode *nextNode = cur->next;
        while(nextNode){
            cur->next = pre;
            pre = cur;
            cur = nextNode;
            nextNode = cur->next;
        }
        cur->next = pre;
        return cur;
    }
};