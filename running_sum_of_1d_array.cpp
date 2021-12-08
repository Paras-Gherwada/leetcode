class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int idx = 1; idx < nums.size(); ++idx)
            nums[idx] += nums[idx - 1];
        
        return nums;
    }
};