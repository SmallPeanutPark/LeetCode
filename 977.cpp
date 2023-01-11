class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int element : nums) {
            ans.emplace_back(pow(element, 2));
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
