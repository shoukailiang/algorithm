
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
class BSTIterator {
private:
    vector<int> ret;
    int idx ;
    void dfs(TreeNode* node){
        if(node==nullptr){
            return ;
        }
        dfs(node->left);
        ret.push_back(node->val);
        dfs(node->right);
    }
public:
    BSTIterator(TreeNode* root) {
        idx = -1;
        dfs(root);
    }
    
    int next() {
        return ret[++idx];
    }
    
    bool hasNext() {
        return idx<(int)ret.size()-1;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */