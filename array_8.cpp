	bool hasArrayTwoCandidates(int arr[], int n, int x) {
    int i, temp;
    unordered_set<int>u;
    for(i=0;i<n;i++)
    {
        temp=x-arr[i];
        if(u.find(temp)!=u.end())
        {
            return true;
        }
        else
        {
            u.insert(arr[i]);
        }
    }
    return false;
	}
};
