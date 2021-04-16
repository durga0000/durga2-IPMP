class Solution{
    public:
       void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
public:	

	void segregateEvenOdd(int arr[], int n) {
	    // code here
	    int l=0;
	    int r=n-1;
	 
	    while(l<r)
	    {
	        while(arr[l]%2==0 && l<r)
	        {
	            l++;
	        }
	        while(arr[r]%2==1&&l<r)
	        {
	            r--;
	        }
	        if(l<r)
	        {
	            swap(&arr[l],&arr[r]);
	            l++;
	            r--;
	        }
	    }
	}
};

