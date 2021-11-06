class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> result;
        for(int val : nums) {
            if(count(nums.begin(), nums.end(), val) == 1)
                result.push_back(val);
        }
        
        return result;
    }
};