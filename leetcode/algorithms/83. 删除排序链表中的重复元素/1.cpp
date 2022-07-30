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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(-1000);
        dummy->next = head;
        ListNode* cur = dummy;
        while(cur&&cur->next){
            ListNode* temp = cur->next;
            if(cur->val==temp->val){
                cur->next = temp->next;
                delete temp;
            }else{
                cur = cur->next;
            }
        }
        return dummy->next;
    }
};