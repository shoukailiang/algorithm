class Solution3 {
    public ListNode removeElements(ListNode head, int val) {
        // 递归解法
        if(head == null)
            return head;
        ListNode res = removeElements(head.next, val);
        if(head.val == val)
            return res;
        else{
            head.next = res;
            return head;
        }
    }
}
