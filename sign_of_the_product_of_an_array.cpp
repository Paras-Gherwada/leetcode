class Solution {
private:
public:
    int arraySign(vector<int>& nums) {
        if(count(nums.begin(), nums.end(), 0) > 0)
            return 0;
        
        int sign = 1;
        for(int v : nums)
            if(v < 0)
                sign *= -1;
        
        return sign;
    }
};