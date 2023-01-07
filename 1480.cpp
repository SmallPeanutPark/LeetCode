class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> answer;
        int sum = 0;
        for(int element : nums) {
            sum += element;
            answer.emplace_back(sum);
        }
        return answer;
    }
};
