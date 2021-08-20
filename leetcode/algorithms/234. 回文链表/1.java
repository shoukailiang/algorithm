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
  ListNode reverseLinkedList(ListNode head){
      ListNode pre = null;
      ListNode cur = head;
      ListNode next = null;
      while(cur!=null){
          next = cur.next;
          cur.next = pre;
          pre =cur;
          cur  = next;
      }
      return pre;
  }
  public boolean isPalindrome(ListNode head) {
      if(head.next==null){
          return true;
      }
      if(head.next.next==null){
          return head.next.val == head.val;
      }
      ListNode slow = head;
      ListNode fast = head;
      boolean flag =false;

      while(fast!=null&&fast.next!=null){
          slow = slow.next;
          fast = fast.next.next;
      }
      if(fast!=null){
          slow = slow.next;
      }
      ListNode pre = reverseLinkedList(slow);
      while(pre!=null){
          if(pre.val!=head.val){
              flag = true;
              break;
          }
          pre = pre.next;
          head = head.next;
      }
      return !flag;
  }
}