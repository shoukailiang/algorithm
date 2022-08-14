#include <iostream>
#include <bits/stdc++.h>
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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(!root){
            return nullptr;
        }
        if(root->val<low){
            TreeNode* res = trimBST(root->right,low,high);
            return res;
        }
        if(root->val>high){
            TreeNode* res = trimBST(root->left,low,high);
            return res;
        }
        root->left = trimBST(root->left,low,high);
        root->right = trimBST(root->right,low,high);
        return root;
    }
};
int main() {
    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(1);
    TreeNode* t3 = new TreeNode(10);
    t1->left = t2;
    t1->right = t3;
    TreeNode* res = Solution().trimBST(t1,1,3);
    return 0;
}
