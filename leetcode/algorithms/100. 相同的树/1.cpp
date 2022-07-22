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
    bool compare(TreeNode* l,TreeNode* r){
        if(l==nullptr&&r!=nullptr){
            return false;
        }
        if(l!=nullptr&&r==nullptr){
            return false;
        }
        if(l==nullptr&&r==nullptr){
            return true;
        }
        if(l->val!=r->val){
            return false;
        }

        bool leftBool = compare(l->left,r->left);
        bool rightBool = compare(l->right,r->right);
        return leftBool&&rightBool;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return compare(p,q);
    }
};