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
    // -1 表示不是平衡
    // 1 表示是平衡
private:
    int getDepth(TreeNode* node){
        if(node== nullptr){
            return 0;
        }
        int le = getDepth(node->left);
        if(le==-1){
            return -1;
        }
        int ri = getDepth(node->right);
        if(ri==-1){
            return -1;
        }
        return abs(le-ri)>1?-1:1+ max(le,ri);
    }
public:
    bool isBalanced(TreeNode* root) {
        return getDepth(root)==-1? false: true;
    }
};
int main() {
    TreeNode* t1 = new TreeNode(3);
    TreeNode* t2 = new TreeNode(9);
    TreeNode* t3 = new TreeNode(10);
    t1->left = t2;
    t1->right = t3;
    bool res = Solution().isBalanced(t1);
    cout<<res<<endl;
    return 0;
}
