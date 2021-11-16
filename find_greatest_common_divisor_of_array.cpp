class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max_val = *max_element(nums.begin(), nums.end());
        int min_val = *min_element(nums.begin(), nums.end());
        
        int gcd = min_val;
        while(gcd > 0) {
            if(min_val % gcd == 0 && max_val % gcd == 0)
                break;
            --gcd;
        }
        
        return gcd;
    }
};