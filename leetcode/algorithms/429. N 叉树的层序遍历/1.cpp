#include <iostream>
#include "vector"
#include "algorithm"
#include "set"
#include "stack"
#include "queue"
using namespace std;


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
    vector<vector<int>> levelOrder(Node* root) {
        queue<Node*> que;
        if(root!= nullptr){
            que.push(root);
        }
        vector<vector<int>> res;
        while(!que.empty()){
            vector<int> temp;
            int size = que.size();
            for (int i = 0; i < size; ++i) {
                Node *node = que.front();
                que.pop();
                temp.push_back(node->val);
                for (const auto &item: node->children){
                    que.push(item);
                }
            }
            res.push_back(temp);
        }
        return res;
    }
};
int main() {


    Node* t2 = new Node(9);
    Node* t3 = new Node(20);
    Node* t4 = new Node(15);
    Node* t5 = new Node(7);
    Node* t1 = new Node(3,vector<Node*>{t2,t3,t4,t5});
    vector<vector<int>> res = Solution().levelOrder(t1);
    for (const auto &items: res){
        for (const auto &item: items){
            cout<<item<<" ";
        }
        cout<<endl;
    }
    return 0;
}
