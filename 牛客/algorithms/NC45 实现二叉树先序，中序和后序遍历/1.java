import java.util.*;

/*
 * public class TreeNode {
 *   int val = 0;
 *   TreeNode left = null;
 *   TreeNode right = null;
 * }
 */

public class Solution {
    /**
     * 
     * @param root TreeNode类 the root of binary tree
     * @return int整型二维数组
     */
    ArrayList<Integer> first = new ArrayList<>();
    ArrayList<Integer> mid = new ArrayList<>();
    ArrayList<Integer> last = new ArrayList<>();
    public void preorder(TreeNode root){
        if(root==null){
            return;
        }
        first.add(root.val);
        preorder(root.left);
        preorder(root.right);
    }
    public void midorder(TreeNode root){
        if(root==null){
            return;
        }
        
        midorder(root.left);
        mid.add(root.val);
        midorder(root.right);
    }
    public void lastorder(TreeNode root){
        if(root==null){
            return;
        }
        lastorder(root.left);
        lastorder(root.right);
        last.add(root.val);
    }
    public int[][] threeOrders (TreeNode root) {
        preorder(root);
        midorder(root);
        lastorder(root);
        // write code here
        int res[][] = new int[3][first.size()];
        for(int i=0;i<first.size();i++){
            res[0][i] = first.get(i);
            res[1][i] = mid.get(i);
            res[2][i] = last.get(i);
        }
        return res;
    } 
}