class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even, odd;
        for(int val : nums) {
            if(val&1) odd.push_back(val);
            else even.push_back(val);
        }

        nums.clear();
        for(int val : even) nums.push_back(val);
        for(int val : odd) nums.push_back(val);

        return nums;
    }
};
