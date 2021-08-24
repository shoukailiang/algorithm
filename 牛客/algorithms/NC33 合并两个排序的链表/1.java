/*
public class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}*/
public class Solution {
  public ListNode Merge(ListNode list1,ListNode list2) {
      ListNode shadow = new ListNode(0);
      ListNode p1 = list1;
      ListNode p2 = list2;
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
          cur.next = p2;
      }
      return shadow.next;
  }
}