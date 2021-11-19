class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        for(int num : nums)
            if(count(nums.begin(), nums.end(), num) == 1)
                sum += num;
        
        return sum;
    }
};