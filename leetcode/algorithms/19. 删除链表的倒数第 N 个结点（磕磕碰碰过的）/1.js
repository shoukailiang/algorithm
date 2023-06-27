/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var removeNthFromEnd = function(head, n) {
    let step = n;
    let fast = head;
    let slow = head;
    while(step--){
        fast = fast.next;
    }
    if(fast==null){
        return head.next;
    }
    while(fast&&fast.next){
        fast = fast.next;
        slow = slow.next;
    }
    slow.next =slow.next.next;
    return head;
};