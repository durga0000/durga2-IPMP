 // Your code here
        long long left=0;
        long long sum=0;
        if(n==1)
        return 1;
        
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        for(int i=0;i<n;i++)
        {
            sum=sum-a[i];
            if(left==sum)
            {
                return i+1;
            }
            left=left+a[i];
        }
        return -1;
    }

