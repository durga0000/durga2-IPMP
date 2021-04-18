ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
         stack<int>s1,s2;
        while(l1!=NULL)
        {
            s1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            s2.push(l2->val);
            l2=l2->next;
        }
        
        int carry=0;
         ListNode*   res=NULL;
        while(s1.empty()==false|| s2.empty()==false)
        {
            int a=0;
            int b=0;
            if(s1.empty()==false)
            {
                a=s1.top();
                s1.pop();
            }
            if(s2.empty()==false)
            {
                b=s2.top();
                s2.pop();
            }
            ListNode* temp=new ListNode();
            int total=a+b+carry;
            temp->val=total%10;
            carry=total/10;
            if(res==NULL)
            {
                res=temp;
            }
            else
            {
                temp->next=res;
                res=temp;
            }
            if(carry!=0)
            {
               ListNode* temp=new ListNode();
        temp->val=carry;
        temp->next=res;
        res=temp; 
            }
            
            
        }
        return res;
    }
};
