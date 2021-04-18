class Solution {
    public:
    int count(ListNode* head)
    {
        int c=0;
        while(head!=NULL)
        {
            
            head=head->next;
            c++;
        }
        return c;
    }
public:
    
    ListNode* swapNodes(ListNode* head, int k) 
    {
          int n=count(head);   
        if(n<k)
            return head;
        if (2 * k - 1 == n)
        return head;
        ListNode* x_prev=NULL;
        ListNode* x=head;
        for(int i=1;i<k;i++)
        {
            x_prev=x;
            x=x->next;
        }
        
        
        ListNode* y_prev=NULL;
        ListNode* y=head;
        for(int i=1;i<n-k+1;i++)
        {
            y_prev=y;
            y=y->next;
        }
        if(x_prev!=NULL)
        x_prev->next=y;
      if(y_prev!=NULL)
        y_prev->next=x;
        
        ListNode* temp=x->next;
        x->next=y->next;
        y->next=temp;
        
        if(k==1)
        {
            head=y;
        }
        if(k==n)
        {
            head=x;
        }
        
        
        
        
        return head;
        
        
    }
};
