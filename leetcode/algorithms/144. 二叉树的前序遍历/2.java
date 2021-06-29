// 迭代
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
class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
       List<Integer> res = new ArrayList<Integer>();
        if(root==null){
            return res;
        }
        Stack<TreeNode> stack = new Stack<TreeNode>();
        TreeNode node = root;
        stack.push(root);
        while(!stack.isEmpty()){
            root = stack.pop();
            if(root!=null){
                res.add(root.val);
                stack.push(root.right);
                stack.push(root.left);
            }
        }
        return res;

    }
}