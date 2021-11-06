class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int idx = 0;
        while(idx < nums.size()) {
            if(count(nums.begin(), nums.end(), nums[idx]) == 1)
                break;
            ++idx;
        }
        
        return nums[idx];
    }
};