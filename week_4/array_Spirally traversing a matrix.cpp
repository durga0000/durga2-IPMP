vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int>v;
        
          int rows = matrix.size(), cols = matrix[0].size();
        int top=0;
        int down=rows-1;
        int left=0;
        int right=cols-1;
        int dir=0;
        int i;
        while(top<=down && left<=right)
        {
            if(dir==0)
            {
                for(i=left;i<=right;i++)
                
                    v.push_back(matrix[top][i]);
                    top++;
                
            }
            else
            {
                if(dir==1)
                {
                    for(i=top;i<=down;i++)
                    
                        v.push_back(matrix[i][right]);
                        right--;
                    
                }
                else
                {
                    if(dir==2)
                    {
                        for(i=right;i>=left;i--)
                        
                            v.push_back(matrix[down][i]);
                            down--;
                        
                    }
                    else
                    {
                        if(dir==3)
                        {
                            for(i=down;i>=top;i--)
                            
                                v.push_back(matrix[i][left]);
                                left++;
                            
                        }
                    }
                }
            }
            dir=(dir+1)%4;
        }
        return v;
    }
};
