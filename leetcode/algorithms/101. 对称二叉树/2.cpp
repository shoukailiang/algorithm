#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "stack"
#include "queue"
using namespace std;


/**
 * Definition for a binary tree node. */
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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> que;
        if(root== nullptr){
            return false;
        }
        que.push(root->left);
        que.push(root->right);
        while (!que.empty()){
            TreeNode* left = que.front();
            que.pop();
            TreeNode* right = que.front();
            que.pop();
            if(!left&&!right){
                // 如果两个都是空的
                continue;
            }
            if(!left || !right || left->val != right->val){
                return false;
            }
            que.push(left->left);
            que.push(right->right);
            que.push(left->right);
            que.push(right->left);
        }
        return true;
    }
};
int main() {


    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(9);
    TreeNode* t3 = new TreeNode(9);
//    TreeNode* t4 = new TreeNode(15);
//    TreeNode* t5 = new TreeNode(7);
    t1->left = t2;
    t1->right = t3;
//    t3->left = t4;
//    t3->right = t5;
    bool res = Solution().isSymmetric(t1);
    cout<<res<<endl;

    return 0;
}
