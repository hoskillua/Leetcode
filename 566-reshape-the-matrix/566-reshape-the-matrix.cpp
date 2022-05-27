class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r=0, int c = 0) {
        int m = mat.size();
        int n = mat[0].size();
        if(r*c != m*n)
            return mat;
        vector<vector<int>> M(r, vector<int>(c));
        int x = 0;
        for(int i = 0; i < m; i++)
             for(int j = 0; j < n; j++)
             {
                 M[x/c][x%c] = mat[i][j];
                 x++;
             }
        return M;
    }
};