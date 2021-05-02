 
    public:
        int closestToZero(int arr[], int n)
        {
           sort(arr,arr+n);
            int min=INT_MAX;
           int l=0,r=n-1;
           
           while(l<r)
           {
               if(abs(arr[l]+arr[r])<abs(min))
               {
                   min=arr[l]+arr[r];
               }
               else
               {
                   if(arr[l]+arr[r]>0)
                   r--;
                   else
                   l++;
               }
           }
           return min;
        }
