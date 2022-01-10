class Solution {
public:
    int mod=1e9+7;

    void reverse(ListNode**head){
        ListNode*curr=*head,*prev=0,*temp=0;
        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev=curr;
            curr = temp;
        }
        *head=prev;
    }
    int pairSum(ListNode* head) {
        ListNode*temp=head;
        ListNode*prev =0,*slow=head,*fast=head;
        
        while(fast and fast->next){ //finding mid
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=0;
        reverse(&slow);
        int ans=0;
        ListNode *ptr1=head, *ptr2=slow;
        while(ptr1){
            ans=max(ans,ptr1->val + ptr2->val);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        reverse(&slow);     //reverse second half
	    prev->next=slow; 
        
        return ans%mod;
    }
};