/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
// 广度优先遍历
class Solution {
    class QueueNode{
        TreeNode node;
        int deep;
        public QueueNode(TreeNode node,int deep){
            this.node = node;
            this.deep = deep;
        }
    }
    public int minDepth(TreeNode root) {
        if(root==null){
            return 0;
        }
        Queue<QueueNode> queue = new LinkedList<QueueNode>();
        queue.offer(new QueueNode(root,1));
        while(!queue.isEmpty()){
            QueueNode qnode = queue.poll();
            TreeNode node = qnode.node;
            int deep = qnode.deep;
            if(node.left==null&&node.right==null){
                return deep;
            }
            if(node.left!=null){
                queue.offer(new QueueNode(node.left,deep+1));
            }
            if(node.right!=null){
                queue.offer(new QueueNode(node.right,deep+1));
            }
        }
        return 0;
    }
}