/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 递归
class Solution {
vector<int> temp;
public:
    vector<int> reversePrint(ListNode* head) {
        if(!head) {
            return {};
        }
        if(head->next){
            reversePrint(head->next);
        }
        temp.push_back(head->val);
        return temp;
        
    }
};