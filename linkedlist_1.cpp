//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
       int len=0,i;
       Node*temp=head;
       while(temp!=NULL)
       {
           temp=temp->next;
           len++;
       }
       
      if(len<n)
      {
          return -1;
      }
      
       temp=head;
       //we have to find len-n+1 node from begining
       
       for( i=1;i<len-n+1;i++)
       {
           temp=temp->next;
       }
       return temp->data;
  
       
}


