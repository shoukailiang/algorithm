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
    TreeNode* traverse(TreeNode* cur,TreeNode* p,TreeNode* q){
        if(cur==NULL){
            return cur;
        }

        if(cur->val>p->val&&cur->val>q->val){
            TreeNode * l = traverse(cur->left,p,q);
            if(l){
                return l;
            }
        }
        if(cur->val<p->val&&cur->val<q->val){
            TreeNode * r = traverse(cur->right,p,q);
            if(r){
                return r;
            }
        }

        return cur;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return traverse(root,p,q);
    }
};