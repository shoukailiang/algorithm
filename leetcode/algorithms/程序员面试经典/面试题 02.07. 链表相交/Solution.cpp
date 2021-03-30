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
    int getLength(ListNode *head){
        ListNode *p = head;
        int cnt= 0;
        while(p){
            cnt++;
            p = p->next;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a = getLength(headA);
        int b = getLength(headB);
        int dis = 0 ;
        if(a==0||b==0){
            return NULL;
        }
        int longone,shortone;
        if(a!=b){
            dis = a>b?a-b:b-a;
        }
        if(a>b){
            while(dis--){
                headA = headA->next;
            }
        }else if(a<b){
            while(dis--){
                headB = headB->next;
            }
        }
        while(headA!=headB&&headA){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};