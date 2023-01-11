class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return l;
    }
};
