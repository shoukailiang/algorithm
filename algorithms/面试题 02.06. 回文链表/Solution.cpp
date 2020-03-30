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
    bool isPalindrome(ListNode* head) {
        if(!head||!head->next){
            return true;
        }
        ListNode *fast = head->next;
        ListNode *slow = head;
        while(fast&&fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *cur = slow->next;
        ListNode *r =NULL;
        slow->next = NULL;
        // 头插转
        while(cur){
            r = cur->next;
            cur->next = slow->next;
            slow->next  = cur;
            cur = r;
        }
        // 比较
        fast = slow->next;
        slow = head;
        while(slow&&fast){
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;
    }
};