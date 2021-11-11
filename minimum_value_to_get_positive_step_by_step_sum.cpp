class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minStartValue = 1, step_sum = 1, idx = 0;
        
        while(idx < nums.size()) {
            step_sum += nums[idx];
            if(step_sum < 1) {
                step_sum = (++minStartValue);
                idx = 0;
                continue;
            }
            ++idx;
        }
        
        return minStartValue;
    }
};