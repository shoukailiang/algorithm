/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
  public ListNode detectCycle(ListNode head) {
      HashSet<ListNode> set = new HashSet<ListNode>();
      ListNode cur = head;
      while(cur!=null){
          if(set.contains(cur)){
              return cur;
          }
          set.add(cur);
          cur = cur.next;
      }
      return null;
  }
}