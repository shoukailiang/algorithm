/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    let newHead = new ListNode();
    let count = 0;
    let cur = newHead;
    while(l1||l2){
        let node = new ListNode();
        cur.next = node;
        let x1 = l1?l1.val:0;
        let x2 = l2?l2.val:0;
        node.val = (x1+x2+count)%10;
        count = Math.floor((x1+x2+count)/10);
        cur = cur.next;
        if(l1){
            l1 = l1.next;
        }
        if(l2){
            l2 = l2.next;
        }
    }
    if(count==1){
        let node = new ListNode(1);
        cur.next = node;
    }
    return newHead.next;
};