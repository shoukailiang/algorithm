/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var detectCycle = function(head) {
    let m = new Map();
    let cur = head;
    while(cur){
        if(!m.has(cur)){
            m.set(cur,1);
        }else{
            return cur;
        }
        cur = cur.next;
    }
    return null;
};