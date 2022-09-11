/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    // -1 表示不平衡， 1表示平衡
    int getDepath(TreeNode* node){
        if(!node){
            return 0;
        }
        int leftDepth = getDepath(node->left);
        if(leftDepth==-1){
            return -1;
        }
        int rightDepth = getDepath(node->right);
        if(rightDepth==-1){
            return -1;
        }
        return abs(leftDepth-rightDepth)>1?-1:1+max(leftDepth,rightDepth);
    }
public:
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        return getDepath(root)==-1?false:true;
    }
};