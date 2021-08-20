/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
// 递归
class Solution {
    public ListNode reverseList(ListNode head) {
      // head==null 传经来的就是null
      // head.next == null已经到最后一个了
      if(head==null||head.next==null){
        return head;
      }
      // 1->2->3->4->5,返回的new_head =5
      ListNode new_head = reverseList(head.next);
      // head = 4
      head.next.next = head;
      head.next = null;
      return new_head;
    }
}