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
    bool compare(TreeNode* left,TreeNode* right){
        if(!left&&right){
            return false;
        }else if(left&&!right){
            return false;
        }else if(!left&&!right){
            return true;
        }else if(left->val!=right->val){
            return false;
        }
        bool out = compare(left->left,right->right);
        bool in = compare(left->right,right->left);
        return out&&in;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return compare(root->left,root->right);
    }
};