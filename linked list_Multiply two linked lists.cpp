long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
 
  long long int n1=0;
  long long int n2=0;
  while(l1||l2)
  {
      if(l1)
      {
      n1=(n1*10+l1->data)%1000000007;
      l1=l1->next;
      }
      if(l2)
      {
 
      n2=(n2*10+l2->data)%1000000007;
      l2=l2->next;}
      
  }
  return ((n2%1000000007)*(n1%1000000007))%1000000007;
}
