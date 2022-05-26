class Solution {
public:
        vector<int> twoSum(vector<int>& nums, int target) {
                int n = nums.size();
        vector<pair<int,int>> numsI(n);
        for(int i = 0; i < n; i++)
        {
            numsI[i] = make_pair(nums[i], i);
        }
        sort(numsI.begin(), numsI.end());
        int i = 0, j = n - 1;
        while(i < j)
        {
            int sum = numsI[i].first + numsI[j].first;
            if(sum == target)
            {
                
                return {(numsI[i].second), (numsI[j].second)};
            }
            else if(sum < target)
                i++;
            else
                j--;
        }
        return {0,0};
    }
        
};