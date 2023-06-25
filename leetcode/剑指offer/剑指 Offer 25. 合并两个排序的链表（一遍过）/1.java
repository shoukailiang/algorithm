/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
  public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
      ListNode p1 = l1;
      ListNode p2 = l2;
      ListNode dummy = new ListNode(-1);
      ListNode p3 = dummy;
      while(p1!=null&&p2!=null){
          if(p1.val<p2.val){
              p3.next = p1;
              p1=p1.next;
              p3 = p3.next;
          }else{
              p3.next = p2;
              p2 = p2.next;
              p3 = p3.next;
          }
      }
      if(p1!=null){
          p3.next = p1;
      }
      if(p2!=null){
          p3.next = p2;       
      }
      return dummy.next;
  }
}