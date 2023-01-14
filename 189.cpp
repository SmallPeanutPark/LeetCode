class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        deque<int> dq(nums.begin(), nums.end());
        for(int i = 0; i < k; ++i) {
            int lastNum = dq[dq.size() - 1];
            dq.pop_back();
            dq.push_front(lastNum);
        }
        nums.clear();
        copy(dq.begin(), dq.end(), back_inserter(nums));
    }
};
