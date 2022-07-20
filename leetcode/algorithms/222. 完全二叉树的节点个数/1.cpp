#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "map"
#include "stack"
#include "queue"
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
    int counts(TreeNode* node){
        if(node==nullptr){
            return 0;
        }
        int l = counts(node->left);
        int r = counts(node->right);
        return 1+l+r;
    }
public:
    int countNodes(TreeNode* root) {
        return counts(root);
    }
};
int main() {
    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(9);
    TreeNode* t3 = new TreeNode(10);
    t1->left = t2;
    t1->right = t3;
    int res = Solution().countNodes(t1);
    cout<<res<<endl;
    return 0;
}
