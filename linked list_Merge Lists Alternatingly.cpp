void mergeList(struct Node **p, struct Node **q)
{
     // Code here
     Node* temp1=(*p);
     Node* temp2=(*q);
  
     Node* fn;
     Node* sn;
     while(temp1!=NULL && temp2!=NULL)
     {
        fn=temp1->next;
        sn=temp2->next;
        temp1->next=temp2;
        temp2->next=fn;
        temp1=fn;
        temp2=sn;
         
     }
     
   
     *q = temp2;
     
}

