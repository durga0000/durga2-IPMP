 vector<int> findDuplicates(vector<int>& nums0)
    {
       int i;
        int n=nums0.size();
        vector<int>v;
        for( i=0;i<n;i++)
        {
            if(nums0[abs(nums0[i])-1]<0)
            {
                  v.push_back(abs(nums0[i]));
            }
            else
            {
                  nums0[abs(nums0[i])-1]=-1*nums0[abs(nums0[i])-1];
            }
        }
        return v;
       
    }
};
