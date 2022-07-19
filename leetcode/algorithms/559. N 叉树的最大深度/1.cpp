#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "stack"
#include "queue"
using namespace std;


/**
 * Definition for a binary tree node. */
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
    int maxDepth(Node* root) {
        queue<Node*> que;
        if(root!= nullptr){
            que.push(root);
        }
        int cnt = 0;
        while(!que.empty()){
            cnt++;
            int size = que.size();
            for (int i = 0; i < size; ++i) {
                Node* node = que.front();
                que.pop();
                for (int i = 0; i < node->children.size(); ++i) {
                    que.push(node->children[i]);
                }
            }
        }
        return cnt;
    }
};
int main() {


    Node* t1 = new Node(3);
    Node* t2 = new Node(9);
    Node* t3 = new Node(10);

//    t3->left = t4;
//    t3->right = t5;
    bool res = Solution().maxDepth(t1);
    cout<<res<<endl;
    return 0;
}
