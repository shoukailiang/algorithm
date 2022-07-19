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
private:
    bool compare(TreeNode *left,TreeNode *right){
        if(left==nullptr&&right!=nullptr){
            return false;
        }else if(left!=nullptr&&right==nullptr){
            return false;
        }else if(left==nullptr&&right==nullptr){
            return true;
        }else if(left->val!=right->val){
            return false;
        }
        return compare(left->left,right->right)&&compare(left->right,right->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        return compare(root->left,root->right);
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
