
	void rearrange(int arr[], int n)
	{
	    int i=-1;int temp=0;
	    for(int j=0;j<n;j++)
	    {
	        if(arr[j]<0)
	        {
	            i++;
	           temp=arr[i];
	           arr[i]=arr[j];
	           arr[j]=temp;
	        }
	    }
	    int neg=0;
	    int pos=i+1;
	    while(neg<pos && pos<n&& arr[neg]<0)
	    {
	       temp=arr[neg];
	       arr[neg]=arr[pos];
	       arr[pos]=temp;
	        neg=neg+2;
	        pos++;
	    }
	   
	         
	}
};
