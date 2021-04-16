  // Function to find the two repeated element
    // arr: input array
    // N: denoting that the size of array is N + 2 and range of elements is [1, N]
    pair<int,int> twoRepeated (int arr[], int N)
    {
        //find duplicut and push into vector and assine to pair and retuern 
      
        pair<int,int>p;
        vector<int>v;
        for(int i=0;i<=N+1;i++)
        {
            if(arr[abs(arr[i])]>=0)
            {
                arr[abs(arr[i])]=-arr[abs(arr[i])];
            }
            else
            v.push_back(abs(arr[i]));
        }
        p.first = v[0];
        p.second = v[1];
        return p;
        
    }
};
