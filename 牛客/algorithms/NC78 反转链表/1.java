/*
public class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
  public ListNode ReverseList(ListNode head) {
      ListNode pre = null;
      ListNode cur = head;
      ListNode next = null;
      while(cur!=null){
          next = cur.next;
          cur.next = pre;
          pre = cur;
          cur = next;
      }
      return pre;
  }
}