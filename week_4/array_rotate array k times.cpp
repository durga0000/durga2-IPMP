class Solution {
    public:
    void r(vector<int>& nums,int low,int high)
    {
        while(low<high)
            
        {
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
    }
public:
    void rotate(vector<int>& nums, int k)
    {
        //first we reverse first part 
        //next we reverse last k
        //next we reverse total array 
        
        
        int n=nums.size();
      
        k=k%n;// question is we have to rotate array k times if k is greater than n . we use % so k will necome always 1
       r(nums,0,n-k-1);
        r(nums,n-k,n-1);
        r(nums,0,n-1);
    }
};g
