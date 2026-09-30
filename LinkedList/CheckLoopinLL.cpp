class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        map<ListNode*,int> mpp;
        while(temp!=NULL){
            if(mpp.find(temp)!=mpp.end()){
                return true;
            }
            mpp[temp]=1;
            temp=temp->next;
        }
        return false;
        
    }
};