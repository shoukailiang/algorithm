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
    bool helper(TreeNode* A,TreeNode* B){
        if(B==NULL){
            return true;
        }
        if(A==NULL||A->val!=B->val){
            return false;
        }
        return helper(A->left,B->left)&&helper(A->right,B->right);
    }
public:
    bool isSubStructure(TreeNode* A, TreeNode* B) {
        if (B == NULL || A == NULL) {
            return false;
        }
        if (A->val == B->val && (helper(A->left, B->left) && helper(A->right, B->right))) {
            return true;
        }
        return isSubStructure(A->left, B) || isSubStructure(A->right, B);
    }
};