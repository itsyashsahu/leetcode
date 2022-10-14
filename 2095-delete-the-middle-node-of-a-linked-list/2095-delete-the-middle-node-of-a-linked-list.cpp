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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        ListNode* temp2=head;
        ListNode* tem=head;
        double count =0;
        while(temp != NULL){
            count++;
            temp=temp->next;
        }
        count--;
        if(count==0)return NULL;
        count=ceil(count/2);
        
        for( int i=0; i<=count;i++){
            // cout<<count<<endl;
            if(count==i){
                if(temp2->next == NULL){
                    tem->next=NULL;
                }else{
                    tem->next=temp2->next;
                }
            }
            tem=temp2;
            temp2=temp2->next;
        }
        return head;
    }
};