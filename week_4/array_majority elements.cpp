int majorityElement(int a[], int size)
{
        
    // your code here
  int cand=a[0];
  int count=1;
  for(int i=1;i<size;i++)
  {
      if(a[i]==cand)
      {
          count++;
      }
      else
      {
          count--;
      }
      if(count==0)
      {
          cand=a[i];
          count=1;
      }
  }
  
  int ct=0;
  for(int i=0;i<size;i++)
  {
      if(a[i]==cand)
      ct++;
  }
  if(ct>size/2)
  return cand;
  else
  return -1;
        
}
