class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffeled;
        for(int idx = 0; idx < n; ++idx) {
            shuffeled.push_back(nums[idx]);
            shuffeled.push_back(nums[idx + n]);
        }
        
        return shuffeled;
    }
};