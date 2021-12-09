class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true, dec = true;
        for(int idx = 1; idx < nums.size(); ++idx) {
            if(nums[idx - 1] > nums[idx])
                inc = false;
            if(nums[idx - 1] < nums[idx])
                dec = false;
        }
        
        return (inc || dec);
    }
};