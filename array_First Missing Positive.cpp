class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
       
         int one=0;
        int n=nums.size();
        //step 1 we have to find all -ve numbers and numbers greater than N and make itv as 1 and check if 1 is
        //present in array are not if not return 1
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                one=1;
            }
            else
            {
                if(nums[i]<=0 || nums[i]>n)
                {
                    nums[i]=1;
                }
            }
        }
        if(one==0)
            return 1;

        // step 2 we have to make indexes -ve .we use values to make negituive 
        //we will make numbers -ve by values becaues our ans is below n; and we have to do -1 from that value becaues 0 based
        for(int i=0;i<n;i++)
        {
            int index=abs(nums[i])-1;
            if(nums[index]>0)
            {
                nums[index]=-1*nums[index];
            }
            
        }
        
        //step 3 now our ans is first positive index+1
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
          
                return i+1;
            }
        }
        //if we not find means ans is n+1 because [1,2,3] case all will become -ve ;
        
        return n+1;
    }
};
