class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> Freq;
        for (auto x : nums) {
            Freq[x]++;
            if (Freq[x] > 1)
                return true;
        }
        return false;
    }
};