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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        int len = 0;
        ListNode* node = head;
        while(node){
            len++;
            node = node->next;
        }
        int temp = len-k;
        while(temp--){
            head=head->next;
        }
        return head;
    }
};