class Solution {
public:
    int search(vector<int>& nums, int target) {
        int location = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(location < 0 || location >= nums.size()) {
            return -1;
        } else {
            if(nums[location] == target) {
                return location;
            } else {
                return -1;
            }
        }
    }
};
