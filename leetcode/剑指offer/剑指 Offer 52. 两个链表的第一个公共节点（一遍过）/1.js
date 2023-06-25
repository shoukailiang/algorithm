/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function(headA, headB) {
    if(headA==null||headB==null){
        return;
    }
    let a_len =0;
    let b_len =0;
    let curA= headA;
    let curB = headB;
    while(curA){
        a_len++;
        curA = curA.next;
    }
    while(curB){
        b_len++;
        curB = curB.next;
    }
    let offset = 0;
    curA = headA;
    curB = headB;
    if(a_len>b_len){
        offset = a_len-b_len;
        while(offset--){
            curA = curA.next;
        }
        while(curA!==curB){
            curA = curA.next;
            curB = curB.next;
        }
        return curA;
    }else{
        offset = b_len-a_len;
        while(offset--){
            curB = curB.next;
        }
        while(curA!==curB){
            curA = curA.next;
            curB = curB.next;
        }
        return curB;
    }
};