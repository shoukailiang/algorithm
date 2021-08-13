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
  public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
      ListNode pre = new ListNode(0);
      ListNode cur = pre;
      // 进位
      int carry = 0;
      while(l1!=null||l2!=null){
          int x = l1!=null?l1.val:0;
          int y = l2!=null?l2.val:0;
          int cnt = (x+y+carry)%10;
          carry = (x+y+carry)/10;
          ListNode now = new ListNode(cnt);
          cur.next = now;
          cur = now;
          if(l1!=null){
              l1=l1.next;
          }
          if(l2!=null){
              l2=l2.next;
          }
      }
      if(carry==1){
          ListNode l = new ListNode(1);
          cur.next = l;
      }
      return pre.next;
  }
}