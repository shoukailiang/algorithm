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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;// 进位
        ListNode* pre = new ListNode(0);
        ListNode* cur = pre;

        while(l1||l2){
            int x1 = l1!=nullptr?l1->val:0;
            int x2 = l2!=nullptr?l2->val:0;
            int sum = x1+x2+carry;
            carry = sum/10;
            ListNode* newNode = new ListNode(sum%10);
            cur->next = newNode;
            cur = newNode;
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
        }
        if(carry==1){
             ListNode* newNode = new ListNode(1);
             cur->next = newNode;
        }
        return pre->next;
    }
};