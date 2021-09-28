class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> result;
        for(int val : nums)
            if(!(val&1)) result.push_back(val);

        for(int val : nums)
            if(val&1) result.push_back(val);

        return result;
    }
};
