/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
  void reverseLinkedList(ListNode head) {
      ListNode pre = null;
      ListNode cur = head;
      ListNode next = null;
      while (cur != null) {
          next = cur.next;
          cur.next = pre;
          pre = cur;
          cur = next;
      }
  }
  public ListNode reverseBetween(ListNode head, int left, int right) {
       ListNode dummy = new ListNode(-1);
       dummy.next = head;
       ListNode pre = dummy;
      // 找到left前面的一个节点
      for (int i = 0; i < left - 1; i++) {
          pre = pre.next;
      }
      ListNode rightNode = pre;
      // 找到right节点
      for(int i=0;i<right-left+1;i++){
          rightNode = rightNode.next; 
      }
      // left节点
      ListNode leftNode = pre.next;
      // right后面的节点,便于连接链表
      ListNode cur = rightNode.next;

      // 先断掉,不然会出现环
      pre.next = null;
      rightNode.next = null;

      reverseLinkedList(leftNode);
      // 连接链表
      pre.next = rightNode;
      leftNode.next = cur;
      return dummy.next;
  }
}