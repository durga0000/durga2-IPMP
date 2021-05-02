class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        // here we find sub array sum 0 or not by adding every element one 
        //by one and find sum in unordered set if sum exists in unordered set has sub array with 0
        unordered_set<int>s;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(sum==0||s.find(sum)!=s.end())
            {
                return true ;
            }
            else
            {
                s.insert(sum);
            }
            
        }
        return false;
    } 
}

