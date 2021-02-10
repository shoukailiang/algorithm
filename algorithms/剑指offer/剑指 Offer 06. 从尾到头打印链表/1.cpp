/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// 循环
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> temp;
        while(head){
            temp.push_back(head->val);
            head = head->next;
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};