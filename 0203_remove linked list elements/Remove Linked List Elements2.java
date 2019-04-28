class Solution {
    public ListNode removeElements(ListNode head, int val) {
        // 设置一个虚拟头结点，这样每个节点都将有前一个节点，这样不用对第一个元素进行特殊考虑了
        ListNode dummyHead = new ListNode(-1);
        dummyHead.next = head;
        ListNode prev = dummyHead;
        while(prev.next != null){
            if(prev.next.val == val)
                prev.next = prev.next.next;
            else
                prev = prev.next;
        }
        return dummyHead.next;
    }
}