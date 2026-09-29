
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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return true;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* secondhead=reverseList(slow->next);
        ListNode* first=head;
        ListNode* second=secondhead;

        while(second!=NULL){
            if(first->val!=second->val){
                reverseList(secondhead);
                return false;
            }
            first=first->next;
            second=second->next;
            
        }
        reverseList(secondhead);
        return true;

        
        
    }
};