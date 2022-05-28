class Solution {
public:
    int minimumLines(vector<vector<int>>& S) {
        int n = S.size();
        int m = 0;
        sort(S.begin(), S.end());
        long double dx = 1.455465;
        long double dy = 9.999999;
        for(int i = 1; i < n; i++)
        {
            long double px = S[i][0] - S[i-1][0],
                        py = S[i][1] - S[i-1][1];
            if(!doubleEq(dx * py, dy * px))
            {
                m++;
                dx = px;
                dy = py;
            }      
        }
        return m;
    }
    inline bool doubleEq(long double x, long double y, long double margin = 1e-10)
    {
        return abs(x - y) < margin;
    }
};