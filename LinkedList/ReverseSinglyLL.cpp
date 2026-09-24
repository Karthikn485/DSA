
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
        ListNode* last=NULL;
        while(temp!=NULL){
            ListNode* front=temp->next;
            temp->next=last;
            last=temp;
            temp=front;
            
        }
        return last;
        
        
    }
};