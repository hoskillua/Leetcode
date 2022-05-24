class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>> Freq;
        map<int, vector<int>> Diff;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            if(Freq[x].size())
                Diff[x].push_back(i - Freq[x][Freq[x].size()-1]);
            Freq[x].push_back(i);
        }
        for(auto x: Diff)
        {
            if(*min_element(x.second.begin(), x.second.end()) <= k)
                return true;
        }
        return false;
    }
};