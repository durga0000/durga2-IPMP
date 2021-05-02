 vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
         int n=matrix.size();
        int k=matrix[0].size();
          vector<vector<int>> ans(k,vector<int>(n));
     
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
              ans[j][i]=matrix[i][j];
            }
        }
        
        return ans;
        
    }
};
