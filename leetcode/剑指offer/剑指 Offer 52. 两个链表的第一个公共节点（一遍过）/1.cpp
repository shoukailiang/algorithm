/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0;
        int lenB = 0;
        ListNode* newHeadA = headA;
        ListNode* newHeadB = headB;
        while(newHeadA){
            lenA++;
            newHeadA=newHeadA->next;
        }
        while(newHeadB){
            lenB++;
            newHeadB=newHeadB->next;
        }
        int temp = abs(lenB-lenA);
        if(lenA>lenB){
            while(temp--){
                headA = headA->next;
            }
        }else{
            while(temp--){
                headB = headB->next;
            }
        }
        while(headA){
            if(headA==headB){
                return headB;
            }else{
                headA = headA->next;
                headB = headB->next;
            }

        }
        return NULL;
    }
};