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
    TreeNode* pre;
    int count= 0;
    int maxCount = 0;
    vector<int> res ;
    void traversal(TreeNode* node){
        if(!node){
            return;
        }
        traversal(node->left);
        // 第一个节点
        if(!pre){
            count =1;
        }else if(pre->val==node->val){
            count++;
        }else{
            count =1;
        }
        pre = node;
        if(count== maxCount){
            res.push_back(node->val);
        }else if(count>maxCount){
            res.clear();
            maxCount = count;
            res.push_back(node->val);
        }
        traversal(node->right);
    }
public:
    vector<int> findMode(TreeNode* root) {
        traversal(root);
        return res;
    }
};
int main() {
    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(3);
    TreeNode* t3 = new TreeNode(10);
    t1->left = t2;
    t1->right = t3;
    vector<int> res = Solution().findMode(t1);
    for (const auto &item: res){
        cout<<item<<" ";
    }
    return 0;
}
