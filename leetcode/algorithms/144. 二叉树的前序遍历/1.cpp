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
    void traversal(TreeNode* cur,vector<int>& vec){
        if(cur==NULL){
            return;
        }
        vec.push_back(cur->val);
        traversal(cur->left,vec);
        traversal(cur->right,vec);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        traversal(root,result);
        return result;
    }
};