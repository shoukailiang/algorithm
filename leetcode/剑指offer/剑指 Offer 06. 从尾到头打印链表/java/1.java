/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
  public int[] reversePrint(ListNode head) {
      if(head==null){
          return new int[]{};
      }
      Stack<ListNode> s = new Stack<>();
      while(head!=null){
          s.push(head);
          head = head.next;
      }
      int size = s.size();
      int arr[] = new int[size];
      for(int i=0;i<size;i++){
          arr[i] = s.pop().val;
      }
      return arr;
  }
}