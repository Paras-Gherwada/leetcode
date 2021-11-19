class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int sum = 0, ones, zeros;
        for(int i = 0; i < 32; ++i) {
            ones = zeros = 0;
            for(int val : nums)
                ++((val & (1 << i)) ? ones : zeros);
            sum += ones * zeros;
        }
        
        return sum;
    }
};