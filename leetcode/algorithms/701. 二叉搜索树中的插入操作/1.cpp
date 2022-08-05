/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr){
            return new TreeNode(val);
        }
        TreeNode* parent = root;
        TreeNode* p = root;
        while(p){
            parent = p;
            p = p->val<val?p->right:p->left;
        }
        // 跳出循环p为空了
        if(parent->val<val){
            parent->right = new TreeNode(val);
        }else if(parent->val>val){
            parent->left = new TreeNode(val);
        }
        return root;
    }
};