void binSort(int A[], int N)
{
   //Your code here
   
   /**************
    * No need to print the array
    * ************/
    int count=0;
    for(int i=0;i<N;i++)
    {
        if(A[i]==0)
        {
            count++;
        }
    }
   for(int i=0;i<count;i++)
   {
       A[i]=0;
   }
   for(int i=count;i<N;i++)
   {
       A[i]=1;
   }
 
 
 
 
}
 


