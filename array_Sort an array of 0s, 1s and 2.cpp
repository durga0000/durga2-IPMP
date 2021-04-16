class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        int c1=0;
        int c2=0;
        int c3=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                c1++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                c2++;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==2)
            {
                c3++;
            }
        }
        int i=0;
       while(c1>0)
       {
           a[i++]=0;
           c1--;
       }
       while(c2>0)
       {
           a[i++]=1;
           c2--;
       }
       while(c3>0)
       {
           a[i++]=2;
           c3--;
       }
        
    }
    
};
