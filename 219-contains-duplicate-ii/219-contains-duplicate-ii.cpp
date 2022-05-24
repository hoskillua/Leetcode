class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>> Freq;
        vector<int> Diff;
        int n = nums.size();
        for (int i = 0; i < n; i++)
            Freq[nums[i]].push_back(i);
        for(auto f: Freq)
            for(int i = 0; i+1 < f.second.size(); i++)
                Diff.push_back(f.second[i+1] - f.second[i]);
        if(Diff.size() && *min_element(Diff.begin(), Diff.end()) <= k)
            return true;
        return false;
    }
};