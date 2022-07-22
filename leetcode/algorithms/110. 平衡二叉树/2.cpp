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
    vector<string> binaryTreePaths(TreeNode* root) {
       stack<TreeNode*> treeStack;
       stack<string> pathStack;
       vector<string> result;
       if(root== nullptr){
           return result;
       }
        treeStack.push(root);
        pathStack.push(to_string(root->val));
       while(!treeStack.empty()){
           TreeNode* node = treeStack.top();
           treeStack.pop();
           string path = pathStack.top();
           pathStack.pop();
           // 遇到叶子节点
           if(!node->left&&!node->right){
               result.push_back(path);
           }

           if(node->right){
                treeStack.push(node->right);
                pathStack.push(path+"->"+ to_string(node->right->val));
           }

           if(node->left){
               treeStack.push(node->left);
               pathStack.push(path+"->"+ to_string(node->left->val));
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
    vector<string> res = Solution().binaryTreePaths(t1);
    for (const auto &item: res){
        cout<<item<<endl;
    }
    return 0;
}
