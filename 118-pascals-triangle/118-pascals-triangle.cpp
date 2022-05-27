class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> P(n);
        P[0].push_back(1);
        for (int i = 1;  i < n; i++)
        {
            P[i].push_back(1);
            for(int j = 1; j < i; j++)
            {
                P[i].push_back(P[i-1][j-1] + P[i-1][j]);
            }
            P[i].push_back(1);
        }
        return P;
    }
};