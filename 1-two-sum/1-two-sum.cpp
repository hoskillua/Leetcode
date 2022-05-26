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
        for(int i = 0; i < n; i++)
        {
            // get numsI[j].first = target - numsI[i].first by binary search
            int j = binarySearch(numsI, target - numsI[i].first, i + 1, n - 1);
            if(j < n && numsI[j].first == target - numsI[i].first)
                return vector<int>{numsI[i].second, numsI[j].second};
        }
        return {0,0};
    }

    int binarySearch(vector<pair<int,int>>& numsI, int target, int left, int right)
    {
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(numsI[mid].first == target)
                return mid;
            else if(numsI[mid].first < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
};