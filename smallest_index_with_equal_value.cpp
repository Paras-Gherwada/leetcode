class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        bool found = false;
        int i = 0;
        while(i < nums.size()) {
            if(i % 10 == nums[i]) {
                found = true;
                break;
            }
            ++i;
        }
        
        return found ? i : -1;
    }
};