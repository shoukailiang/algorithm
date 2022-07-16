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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> que;
        if(root!= nullptr){
            que.push(root);
        }
        vector<int> res;
        while (!que.empty()){
            int max = INT32_MIN;
            int size = que.size();
            for (int i = 0; i < size; ++i) {
                TreeNode* node = que.front();
                que.pop();
                if(max<node->val){
                    max = node->val;
                }
                if(node->left){
                    que.push(node->left);
                }
                if(node->right){
                    que.push(node->right);
                }
            }
            res.push_back(max);
        }
        return res;
    }
};
int main() {


    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(9);
    TreeNode* t3 = new TreeNode(20);
    TreeNode* t4 = new TreeNode(15);
    TreeNode* t5 = new TreeNode(7);
    t1->left = t2;
    t1->right = t3;
    t3->left = t4;
    t3->right = t5;
    vector<int> res = Solution().largestValues(t1);
    for (const auto &items: res){
        cout<<items<<" ";
    }
    return 0;
}
