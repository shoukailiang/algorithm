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
    int res= 0;
    int count = 0;
    void traversal(TreeNode* node,int k){
        if(node==NULL){
            return;
        }
        traversal(node->right,k);
        if(++count == k){
            res = node->val;
        }
        traversal(node->left,k);
        
    }
public:
    int kthLargest(TreeNode* root, int k) {
        traversal(root,k);
        return res;
    }
};