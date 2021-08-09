class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return ((nums.size()<3) ? nums[nums.size()-1] : nums[nums.size()-3]);
    }
};
