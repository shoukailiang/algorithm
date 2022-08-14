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
    TreeNode* deleteNode(TreeNode* root, int key) {
        // 1.没找到
        if(root== nullptr){
            return nullptr;
        }
        if(root->val==key){
            // 2.为叶子节点
            if(root->left== nullptr&&root->right== nullptr){
                delete root;
                return nullptr;
                // 3,4左右有一个为空
            }else if(root->left== nullptr&&root->right!= nullptr){
                TreeNode* res = root->right;
                delete root;
                return res;
            }else if(root->left!= nullptr&&root->right== nullptr){
                TreeNode* res = root->left;
                delete root;
                return res;
            }else {
                TreeNode* cur = root->right;
                while(cur->left){
                    cur = cur->left;
                }
                cur->left = root->left;
                TreeNode* tmp = root;
                root = root->right;
                delete tmp;
            }
        }

        if(root->val<key){
            root->right = deleteNode(root->right,key);
        }
        if(root->val>key){
            root->left = deleteNode(root->left,key);
        }
        return root;
    }
};
int main() {
    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(1);
    TreeNode* t3 = new TreeNode(10);
    t1->left = t2;
    t1->right = t3;
    TreeNode* res = Solution().deleteNode(t1,4);
    return 0;
}
