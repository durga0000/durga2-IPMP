class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(arr[abs(arr[i])]>=0)
            {
                arr[abs(arr[i])]=-arr[abs(arr[i])];
            }
            else
            {
           v.push_back(abs(arr[i]));
          
            }
        }
        if(v.begin()==v.end())
        {
            v.push_back(-1);
            return v;
        }
        return v;
    }
    
};
