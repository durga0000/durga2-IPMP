class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        int n=nums.size();
        int f=INT_MAX;
        int s=INT_MAX;
        
        if(n<3)
            return false;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=f)
            {
                f=nums[i];
            }
            else
            {
                if(nums[i]<=s)
                    s=nums[i];
                else
                    return true;
            }       
        }
        return false;
    }
};
