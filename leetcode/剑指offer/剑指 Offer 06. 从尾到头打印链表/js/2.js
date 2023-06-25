/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {number[]}
 */
var reverseHelper = function(node, arr) {
    if (node == null) return;
    reverseHelper(node.next, arr);
    arr.push(node.val);
};
var reversePrint = function(head) {
    let arr =[];
    reverseHelper(head,arr);
    return arr;
};




