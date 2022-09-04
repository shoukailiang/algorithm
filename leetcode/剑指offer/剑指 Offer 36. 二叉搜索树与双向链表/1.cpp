/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }

    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/
class Solution {
private:
    Node* pre,*head;
    void dfs(Node* cur){
        if(cur==NULL){
            return ;
        }
        dfs(cur->left);
        if(pre==NULL){
            head = cur;
        }else if(pre!=NULL){
            pre->right = cur;
        }
        cur->left = pre;
        pre = cur;
        dfs(cur->right);
    }
public:
    Node* treeToDoublyList(Node* root) {
        if(!root){
            return NULL;
        }
        dfs(root);
        head->left = pre;
        pre->right = head;
        return head;
    }
};