class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 1; i < n; i++)
        {
             for(int j = 0; j < i; j++)
            {
                if(nums[i]+nums[j] == target)
                    return {i,j};
            }
        }
        return {0,0};
    }
};