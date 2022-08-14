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
private:
    int preVal = 0;
    void traversal(TreeNode* node){
        if(!node){
            return ;
        }
        traversal(node->right);
        preVal+=node->val;
        node->val = preVal;
        traversal(node->left);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        traversal(root);
        return root;
    }
};