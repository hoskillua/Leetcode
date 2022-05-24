class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> Freq;
        for (int x : nums) {
            if (Freq[x]++)
                return true;
        }
        return false;
    }
};