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
 // 找到最左边的节点，判断右节点是否为空，为空：放入容器中，不为空的话，
 //判断右节点是否已经被放入容器中，右节点如果是上一个节点，则已经放入了容器中了。
class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> res = new ArrayList<Integer>();
        if(root==null){
            return res;
        }
        TreeNode prev = null;
        Stack<TreeNode> stack = new Stack<TreeNode>();
        
        while(!stack.isEmpty()||root!=null){
            // 找到最左边的
            while(root!=null){
                stack.push(root);
                root = root.left;
            }
            root = stack.pop();
            if(root.right==null||prev == root.right){
                res.add(root.val);
                prev = root;
                root = null;
            }else{
                stack.push(root);
                root = root.right;
            }
        }
        return res;
    }
}