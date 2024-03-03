/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* p=head;int c=0;
        while(p!=NULL)
        {
            c++;
            p=p->next;
        }
        p=head;
        if(n==c)
        {
            head=head->next;
            return head;
        }
        for(int i=0;i<c-n-1;i++)
        {
            p=p->next;
        }
        p->next=p->next->next;
        return head;

    }
};