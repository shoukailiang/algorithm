/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(l1, l2) {
    let shadowHead = new ListNode();
    let cur = shadowHead;
    while(l1&&l2){
        if(l1.val<=l2.val){
            cur.next = l1;
            cur = l1;
            l1 = l1.next;
        }else{
            cur.next=l2;
            cur = l2;
            l2 = l2.next;
        }
    }
    if(l1){
        cur.next = l1;
    }
    if(l2){
        cur.next= l2;
    }
    return shadowHead.next;
};