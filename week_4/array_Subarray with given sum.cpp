 //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        vector<int>v;
        int l=0;
        int f=0;
        int r=0;
        long sum=0;
        while(l<n && r<n)
        {
           
            if(sum==s)
            {
                v.push_back(l+1);
                v.push_back(r);
                return v;
            }
            else
            {
                if(sum<s)
                {
                    
                 sum=sum+arr[r];
                r++;
                    
                }
                else
                {
                    sum=sum-arr[l];
                    l++;
                    
                }
            }
        }
       
        v.push_back(-1);
        return v;
    }
};

