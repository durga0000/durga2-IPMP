//first set the values to top right .
// draw matrix u will get to know what to do 
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    
	    
	    int i=0,j=M-1;
	    while(i<N && j>=0)
	    {
	        if(mat[i][j]==X)
	        {
	           return 1;
	        }
	        else
	        {
	            if(mat[i][j]>X)
	            {
	                j--;//move left
	                
	            }
	            else
	            {
	                i++;//down move 
	            }
	        }
	    }
	    return 0;
	}
};
