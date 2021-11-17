class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int idx = 0;
        while(idx < nums.size()) {
            while(idx < nums.size() && nums[idx] != 1) ++idx;
            int iter = idx + 1;
            while(iter < nums.size() && nums[iter] != 1) ++iter;
            if(iter < nums.size() && iter - idx <= k) return false;
            idx = iter;
        }
        
        return true;
    }
};