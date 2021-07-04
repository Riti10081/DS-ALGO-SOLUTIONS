class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int i,j,res=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                res+=4;
                    if(i>0){
                        res-=grid[i-1][j];
                    }
                    if(i<grid.size()-1)
                    {
                        res-=grid[i+1][j];
                    }
                    if(j>0)
                    {
                        res-=grid[i][j-1];
                    }
                    if(j<grid[0].size()-1)
                    {
                        res-=grid[i][j+1];
                    }
                            
                
                 }
            }
        
         }
         return res;
    }
       
};

