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
  public void reorderList(ListNode head) {
      if(head==null) return;
      List<ListNode> l = new ArrayList<>();
      ListNode last = head;
      while(last!=null){
          l.add(last);
          last = last.next;
      }
      int i =0;
      int j = l.size()-1;
      while(i<j){
          l.get(i).next = l.get(j);
          i++;
          if(i==j) {
              break;
          }
          l.get(j).next = l.get(i);
          j--;
      }
      l.get(i).next =null;
      
  }
}