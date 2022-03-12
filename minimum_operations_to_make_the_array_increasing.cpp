class Solution {
public:
    int minOperations(vector<int>& nums) {
        int operations = 0;
        for(int idx = 1; idx < nums.size(); ++idx) {
            if(nums[idx] <= nums[idx - 1]) {
                int diff = nums[idx - 1] - nums[idx] + 1;
                operations += diff;
                nums[idx] += diff;
            }
        }
        
        return operations;
    }
};
