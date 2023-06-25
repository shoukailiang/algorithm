/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
  public ListNode deleteNode(ListNode head, int val) {
      if(head==null){
          return null;
      }
      if(head.val==val){
          return head.next;
      }
      ListNode cur =head;
      ListNode pre =head;
      while(cur!=null){
          if(cur.val ==val){
              pre.next =cur.next;
              break;
          }else{
              pre = cur;
              cur = cur.next;
          }
      }
      return head;
  }
}