class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& C) {
        int n = C.size();
        sort(C.begin(),C.end());
        int dx = C[1][0] - C[0][0];
        int dy = C[1][1] - C[0][1];
        for(int i = 2; i < n; i++)
        {
            int px = C[i][0] - C[i-1][0];
            int py = C[i][1] - C[i-1][1];
            if(py*dx != px*dy)
                return false;
        }
        return true;
    }
};