class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> counter(nums.size() + 1, 0);
        for(int num : nums)
            ++counter[num];

        nums.clear();
        for(int num = 0; num < counter.size(); ++num)
            if(counter[num] > 1) nums.push_back(num);

        return nums;
    }
};
