class Solution {
public:
    ListNode* swapPairs(ListNode* head)
    {
        ListNode* temp=new ListNode(0);
        temp->next=head;
        ListNode* curr=temp;
        while(curr->next!=NULL && curr->next->next!=NULL)
        {
            ListNode* f=curr->next;
            ListNode* s=curr->next->next;
            f->next=s->next;// we do this stemp to link first and secode next;
            curr->next=s;
            curr->next->next=f;
            curr=curr->next->next;
        }
       return temp->next;
    }
};
