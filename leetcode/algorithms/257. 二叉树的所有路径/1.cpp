#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "map"
#include "stack"
#include "queue"
#include "cmath"
#include "cstring"
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
    void traveral(TreeNode* node,vector<string> &result,vector<int> &path){
        path.push_back(node->val);
        // 单层递归结束条件
        if(!node->left&&!node->right){
            string temp;
            for (int i = 0; i < path.size()-1; ++i) {
                temp+= to_string(path[i]);
                temp+="->";
            }
            temp+= to_string(path[path.size()-1]);
            result.push_back(temp);
            return;
        }
        if(node->left){
            traveral(node->left,result,path);
            // 回溯
            path.pop_back();
        }
        if(node->right){
            traveral(node->right,result,path);
            path.pop_back();
        }
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> path;
        vector<string> result;
        if(root== nullptr){
            return result;
        }
        traveral(root,result,path);
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
