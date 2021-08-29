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
import java.util.*;
public class Solution {
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