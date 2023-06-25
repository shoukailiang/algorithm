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
        ListNode* temp = new ListNode(-1);
        ListNode* newHead =temp;
        while(l1&&l2){
            if(l1->val<=l2->val){
                temp->next = l1;
                temp = temp->next;
                l1 = l1->next;
            }else{
                temp->next = l2;
                temp = temp->next;
                l2 = l2->next;
            }
        }
        if(l1){
            temp->next = l1;
        }
        if(l2){
            temp->next = l2;
        }
        return newHead->next;
    }
};