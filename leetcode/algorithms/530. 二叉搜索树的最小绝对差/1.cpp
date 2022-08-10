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
private:
    int result = INT_MAX;
    TreeNode* pre;
    void traversal(TreeNode* node){
        if(node== nullptr){
            return;
        }
        traversal(node->left);
        if(pre!= nullptr){
            result = min(result, abs(node->val-pre->val));
        }
        pre = node;
        traversal(node->right);
    }
public:
    int getMinimumDifference(TreeNode* root) {
        traversal(root);
        return result;
    }
};
int main() {
    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(9);
    TreeNode* t3 = new TreeNode(10);
    t1->left = t2;
    t1->right = t3;
    int res = Solution().getMinimumDifference(t1);
    cout<<res<<endl;
    return 0;
}
