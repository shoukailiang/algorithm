#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "map"
#include "stack"
#include "queue"
#include "cmath"
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        stack<TreeNode*> sta;
        sta.push(root);
        int result = 0;
        while(!sta.empty()){
            TreeNode* node = sta.top();
            sta.pop();
            if(node->left!= nullptr&&node->left->left== nullptr&&node->left->right== nullptr){
                result+=node->left->val;
            }
            if(node->right){
                sta.push(node->right);
            }
            if(node->left){
                sta.push(node->left);
            }
        }
        return result;
    }
};
int main() {
    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(9);
    TreeNode* t3 = new TreeNode(10);
    t1->left = t2;
    t1->right = t3;
    int res = Solution().sumOfLeftLeaves(t1);
    cout<<res<<endl;
    return 0;
}
