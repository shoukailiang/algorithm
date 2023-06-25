/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} val
 * @return {ListNode}
 */
var deleteNode = function(head, val) {
    let shadowHead = new ListNode(1,head);
    let cur = shadowHead;
    while(cur.next){
        if(cur.next.val==val){
            cur.next = cur.next.next;
        }else{
            cur = cur.next;
        }
    }
    return shadowHead.next;
};