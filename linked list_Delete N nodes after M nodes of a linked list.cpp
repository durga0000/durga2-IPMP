class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here  
        Node* curr=head;
        int count;
        Node* temp;
        
        while(curr)
        {
            for(count=1;count<M && curr!=NULL;count++)
            {
                curr=curr->next;
            }
            
            if(curr==NULL)
            return ;
            temp=curr->next;
            for(count=1;count<N&&temp!=NULL;count++)
            {
                Node* t=temp;
                temp=temp->next;
                free(t);
                
            }
            curr->next=temp;
            curr=temp;
            
        }
    }
};


