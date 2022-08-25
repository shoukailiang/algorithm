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
    queue<TreeNode*> q;
    vector<vector<int>> ret;
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL){
            return ret;
        }
        q.push(root);
        while(!q.empty()){
            vector<int> temp;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* cur = q.front();
                temp.push_back(cur->val);
                q.pop();
                if(cur->left){
                    q.push(cur->left);
                }
                if(cur->right){
                    q.push(cur->right);
                }
            }
           ret.push_back(temp);
        }
        return ret;
    }
};