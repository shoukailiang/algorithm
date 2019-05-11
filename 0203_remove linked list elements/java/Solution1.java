class Solution1 {
  public ListNode removeElements(ListNode head, int val) {
      // 若一开始那一部分都是需要被删除的元素
      while(head != null && head.val == val){
          ListNode delNode = head;
          head = head.next;
          //方便java垃圾回收
          delNode.next = null;
      }
      // 若全部都是要被删除的节点
      if(head == null)
          return head;
      ListNode prev = head;
      while(prev.next != null){
          if(prev.next.val == val) {
              ListNode delNode = prev.next;
              prev.next = delNode.next;
              delNode.next = null;
          }
          else{
              prev = prev.next;
          }
      }
      return head;
  }
}
// or
/*
class Solution1 {
    public ListNode removeElements(ListNode head, int val) {
        while(head != null && head.val == val)
            head = head.next;
        if(head == null)
            return head;
        ListNode prev = head;
        while(prev.next != null){
            if(prev.next.val == val)
                prev.next = prev.next.next;
            else
                prev = prev.next;
        }
        return head;
    }
}
*/