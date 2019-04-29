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
  ListNode* removeElements(ListNode* head, int val) {
    // 递归解法
    if(head==NULL){
      return head;
    }
    ListNode *res = removeElements(head->next,val);
    if(head->val==val){
      return res;
    } else{
      head->next=res;
      return head;
    }
  }
};