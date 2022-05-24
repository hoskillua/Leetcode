class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, char> Freq;
        for (int x : nums) {
            if (Freq[x]++)
                return true;
        }
        return false;
    }
};