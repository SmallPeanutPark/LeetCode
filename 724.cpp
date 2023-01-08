class Solution {
public:
    vector<int> result;
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        for(int element : nums) {
            total_sum += element;
            result.emplace_back(total_sum);
        }

        int len = result.size();
        int right = result[len - 1];
        int left = 0;
        int beforeNum = 0;
        int pivotidx = -1;
        for(int i = 0; i < len; ++i) {
            left += beforeNum;
            right -= nums[i];
            if(left == right) {
                pivotidx = i;
                break;
            }  
            beforeNum = nums[i];
        }
        return pivotidx;
    }
};
