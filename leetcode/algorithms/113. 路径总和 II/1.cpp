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
private:
    vector<vector<int>> result;
    vector<int> path;
    void traversal(TreeNode* cur,int count){
        if(!cur->left&&!cur->right&&count==0){
            result.push_back(path);
        }
        if(!cur->left&&!cur->right){
            return;
        }
        if(cur->left){
            path.push_back(cur->left->val);
            count-=cur->left->val;
            traversal(cur->left,count);
            count+=cur->left->val;
            path.pop_back();
        }
        if(cur->right){
            path.push_back(cur->right->val);
            count-=cur->right->val;
            traversal(cur->right,count);
            count+=cur->right->val;
            path.pop_back();
        }
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root== nullptr){
            return result;
        }
        path.push_back(root->val);
        traversal(root,targetSum-root->val);
        return result;
    }
};
int main() {
    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(9);
    TreeNode* t3 = new TreeNode(10);
    t1->left = t2;
    t1->right = t3;
    vector<vector<int>> res = Solution().pathSum(t1,12);
    for (const auto &items: res){
        for (const auto &item: items){
            cout<<item<<" ";
        }
        cout<<endl;
    }
    return 0;
}
