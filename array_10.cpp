   //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
      sort(A,A+n);
      int i,l,r;
      for(i=n-1;i>0;i--)
      {
          l=0;r=i-1;
          while(l<r)
          {
             if( X==A[l]+A[r]+A[i])
             return true;
             else
             {
                 if(X>A[l]+A[r]+A[i])
                 l++;
                 else
                 r--;
             }
              
          }
      }
      return false;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends
