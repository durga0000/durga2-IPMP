class Solution{
public:	
	// Function to find length of longest bitonic
	// subarray
	// here we first find length of increasing seqience from left to right 
	// and dec seq length from right to left 
	
	int bitonic(vector<int> arr, int n) {
	    // code here
	    int b[n];
	    int d[n];
	    b[0]=1;
	    d[n-1]=1;
	    int i;
	    for( i=1;i<n;i++)
	    {
	        if(arr[i]>=arr[i-1])
	    b[i]=b[i-1]+1;
	    else
	    b[i]=1;
	    }
	    
	    for( i=n-2;i>=0;i--)
	    {
	        if(arr[i]>=arr[i+1])
	        {
	            d[i]=d[i+1]+1;
	        }
	        else
	        d[i]=1;
	    }
	    int max=b[0]+d[0]-1;
	    for( i=1;i<n;i++)
	    {
	        if((b[i]+d[i]-1)>max)
	        max=b[i]+d[i]-1;
	    }
	    return max;
	}
};
