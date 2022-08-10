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
    int result = INT_MAX;
    TreeNode* pre;
    void traversal(TreeNode* node){
        if(node==nullptr){
            return;
        }
        traversal(node->left);
        if(pre!=nullptr){
            result = min(result,abs(node->val-pre->val));
        }
        pre = node;
        traversal(node->right);
    }
public:
    int minDiffInBST(TreeNode* root) {
        traversal(root);
        return result;
    }
};