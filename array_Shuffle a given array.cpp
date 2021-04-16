

void randam(int arr[],int n)
{
	srand(time(NULL));//while finding randam number we have to right this function first because 
	                   //it will generate all new functions 
	    for(int i=n-1;i>0;i--)
	    {
	    	int j=rand()%(i+1);//pick 0 to i
	    	swap(&arr[i],&arr[j]);
		}
}


