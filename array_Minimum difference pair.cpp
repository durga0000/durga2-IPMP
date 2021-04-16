class Solution{
	public:
   	int  minimum_difference(vector<int>nums){
   	    // Code hereint n=nums.size();
 	int diff=INT_MAX;
 	int n=nums.size();
 	sort(nums.begin(),nums.end());
 	for(int i=0;i<n-1;i++)
 	{
 	    if(nums[i+1]-nums[i]<diff)
 	    {
 	        diff=nums[i+1]-nums[i];
 	    }
 	}
 	return diff;
   	}    
};
