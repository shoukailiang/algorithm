#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "stack"
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    stack<Node*> S;
    vector<int> preorder(Node* root) {
        if(root== nullptr){
            return vector<int>{};
        }
        vector<int> res;
        S.push(root);
        while(!S.empty()){
            auto cur = S.top();
            S.pop();
            res.push_back(cur->val);
            int count = (cur->children).size();
            for(int i=count-1;i>=0;i--){
                if(cur->children[i]){
                    S.push(cur->children[i]);
                }
            }
        }
        return res;
    }
};
int main() {
    return 0;
}
