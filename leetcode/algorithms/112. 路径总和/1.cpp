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
private:
    bool traversal(TreeNode* node,int count){
        // 递归结束的条件
        if(!node->left&&!node->right&&count==0){
            return true;
        }
        if(!node->left&&!node->right){
            return false;
        }
        if(node->left){
            count-=node->left->val;
            if(traversal(node->left,count)){
                return true;
            }
            count+=node->left->val;
        }
        if(node->right){
            count-=node->right->val;
            if(traversal(node->right,count)){
                return true;
            }
            count+=node->right->val;
        }
        return false;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root== nullptr){
            return false;
        }
        return traversal(root,targetSum-root->val);
    }
};
int main() {
    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(9);
    TreeNode* t3 = new TreeNode(10);
    t1->left = t2;
    t1->right = t3;
    bool res = Solution().hasPathSum(t1,12);
    cout<<res<<endl;
    return 0;
}
