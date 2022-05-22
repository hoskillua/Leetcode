class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int A = 0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[i].size(); j++) {
                if(i == 0) {
                    A += grid[i][j];
                }
                if(i == grid.size() - 1)
                {
                    A += grid[i][j];
                }
                else{
                    A += abs(grid[i][j] - grid[i + 1][j]);
                }
                if(j == 0) {
                    A += grid[i][j];
                }
                if(j == grid[i].size() - 1) {
                    A += grid[i][j];
                }
                else {
                    A += abs(grid[i][j] - grid[i][j + 1]);
                }
                if(grid[i][j])
                    A += 2;
            }
        }
        return A;

    }
};