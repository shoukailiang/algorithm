#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "stack"
#include "queue"
using namespace std;


//Definition for a binary tree node.
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        if(root!=nullptr){
            q.push(root);
        }
        while(!q.empty()){
            vector<int> temp;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* t = q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
            }
            res.push_back(temp);
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
    vector<vector<int>> res = Solution().levelOrder(t1);
    for (const auto &items: res){
        for (const auto &item: items){
            cout<<item <<" ";
        }
    }
    return 0;
}
