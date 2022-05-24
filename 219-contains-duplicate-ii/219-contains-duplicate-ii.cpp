class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>> Freq;
        map<int, vector<int>> Diff;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            vector<int>& f = Freq[x];
            if(f.size())
                Diff[x].push_back(i - f[f.size()-1]);
            f.push_back(i);
        }
        for(auto x: Diff)
        {
            if(*min_element(x.second.begin(), x.second.end()) <= k)
                return true;
        }
        return false;
    }
};