 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
class Solution1 {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *p,*q;
        p = head;
        q = head;
        if(!p){
            return head;
        }
        while(q&&q->next){
            p=p->next;
            q=q->next->next;
        }
        return p;
    }
};