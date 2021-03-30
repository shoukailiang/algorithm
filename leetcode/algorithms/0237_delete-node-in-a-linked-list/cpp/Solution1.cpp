
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
  void deleteNode(ListNode *node) {
    ListNode *temp = node->next;

    node->val = temp->val;
    node->next = temp->next;

    delete temp;
  }
};

// 这题未给定头结点，所以无法找到被删除节点的前驱，可以将被删除的后继赋值给被删除的节点，删除后继，相当于狸猫换太子