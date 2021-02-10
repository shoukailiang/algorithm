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
    ListNode* removeDuplicateNodes(ListNode* head) {
      int grid[20001] = {0};
      ListNode *newNode = new ListNode(0);
      ListNode *pc = newNode;
      ListNode *p1 = head;
      while(p1){
        int index = p1->val;
        if(grid[index]==0){
          grid[index] = 1;
          pc->next = p1;
          pc = p1;
        }
        p1 = p1->next;
      }
      pc->next = NULL;
      return newNode->next;
    }
};