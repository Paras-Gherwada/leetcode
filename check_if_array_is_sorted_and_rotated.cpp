class Solution {
public:
    bool check(vector<int>& nums) {
        int small_count = 0;
        for(int idx = 1; idx < nums.size(); ++idx)
            if(nums[idx] < nums[idx - 1])
                ++small_count;
        
        return (small_count == 0 || (small_count == 1 && nums[0] >= nums[nums.size() - 1]));
    }
};