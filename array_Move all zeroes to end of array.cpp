class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int c=0;// to count non zero elements 
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        {
	            arr[c]=arr[i];
	            c++;
	        }
	    }
	    while(c<n)
	    {
	        arr[c]=0;
	        c++;
	    }
	}
};
