class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector <double> D = {distSq(p1,p2), distSq(p1,p3), distSq(p1,p4), distSq(p3,p2), distSq(p4,p2), distSq(p3,p4)};
        sort(D.begin(), D.end());
        return !doubleEq(D[0], 0) && doubleEq(D[0], D[1]) 
            && doubleEq(D[2], D[1]) && doubleEq(D[2], D[3])
            && doubleEq(D[5], D[4]);

    }
    inline double distSq(vector<int>& p1, vector<int>& p2)
    {
        return (p1[0]-p2[0]) * (p1[0]-p2[0]) + (p1[1]-p2[1]) * (p1[1]-p2[1]);
    }
    inline bool doubleEq(double x, double y, double margin = 1e-6)
    {
        return abs(x - y) < margin;
    }
};