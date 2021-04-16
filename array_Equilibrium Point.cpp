int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int right=0;
        int left=0;
        for(int i=1;i<n;i++)
        {
            right=right+a[i];
        }
        
        for(int i=0,j=1;j<n;i++,j++)
        {
            right=right-a[j];
            left=left+a[i];
            if(left==right)
            {
                return i+1;
            }
        }
        return -1;
    }

};
