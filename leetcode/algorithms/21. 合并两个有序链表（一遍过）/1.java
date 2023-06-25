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
  public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
      ListNode shadow = new ListNode(0);
      ListNode p1 = l1;
      ListNode p2 = l2;
      ListNode cur = shadow;
      while(p1!=null&&p2!=null){
          if(p1.val<p2.val){
              cur.next = p1;
              p1 = p1.next;
              cur = cur.next;
          }else{
              cur.next = p2;
              p2 = p2.next;
              cur = cur.next;
          }
      }
      if(p1!=null){
          cur.next = p1;
      }
      if(p2!=null){
          cur.next =p2;
      }
      return shadow.next;
  }
}