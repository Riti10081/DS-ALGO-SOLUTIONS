class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int result=0;
        for(int i=0;i<grid.size();i++)
        {
            int fr=0,side=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j])
                { 
                    result++;
                }
                fr=max(fr,grid[i][j]);
                side=max(side,grid[j][i]);
            }
            result=result+fr+side;
        }
        return result;
    }
};