/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val; // 数据域
 *     ListNode *next;  //指针域
 *     ListNode(int x) : val(x), next(NULL) {} //构造函数
 * };
 */
class Solution {
public:
  ListNode* reverseList(ListNode* head) {
    ListNode *new_head = NULL;  //指向新链表头结点的指针
    while (head){
      ListNode *next = head->next;// 备份head->next
      head->next = new_head;//更新head->next
      new_head = head;// 移动new_head
      head=next; // 遍历链表
    }
    return new_head;
  }
};