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
    vector<int> ret;
    void dfs(TreeNode* node){
        if(node==nullptr){
            return ;
        }
        dfs(node->left);
        ret.push_back(node->val);
        dfs(node->right);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        dfs(root);
        int l = 0;
        int r = ret.size()-1;
        while(l<r){
            int sum = ret[l]+ret[r];
            if(sum>k){
                r--;
            }else if(sum<k){
                l++;
            }else{
                return true;
            }
        }
        return false;
    }
};