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
        if(head==NULL){
            return head;
        }
        if(head->val==val){
            return head->next;
        }
        ListNode* node = head;
        while(node->next){
            if(node->next->val==val){
                ListNode* temp = node->next->next;
                node->next = temp;
            }else{
                 node = node->next;
            }
        }
        return head;
    }
};