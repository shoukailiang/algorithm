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
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> que;
        if(root!= nullptr){
            que.push(root);
        }
        int cnt = 0;
        while(!que.empty()){
            int size = que.size();
            cnt++;
            for (int i = 0; i < size; ++i) {
                TreeNode* node =  que.front();
                que.pop();
                if(node->left){
                    que.push(node->left);
                }
                if(node->right){
                    que.push(node->right);
                }
            }
        }
        return cnt;
    }
};
int main() {


    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(9);
    TreeNode* t3 = new TreeNode(10);
    t1->left = t2;
    t1->right = t3;
    t2->left = nullptr;
    t3->left = nullptr;
//    t3->left = t4;
//    t3->right = t5;
    bool res = Solution().maxDepth(t1);
    cout<<res<<endl;
    return 0;
}
