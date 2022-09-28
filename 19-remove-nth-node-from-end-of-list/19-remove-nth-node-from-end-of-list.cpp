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
        if(head==NULL)return NULL;  
        int cnt=0;
        ListNode *p=head,*q;
        
        while(p){
            cnt++;
            p=p->next;
           }
        if(n>cnt)return head;
        int res=cnt-n;
        p=head;
        while(res--){
            q=p;
            p=p->next;
        }
        
        if(p==head){
            head=head->next;
            return head;
        }
        
        q->next=p->next;
        return head;
    }
};