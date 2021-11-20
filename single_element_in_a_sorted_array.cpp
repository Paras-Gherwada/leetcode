class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int element = 0;
        for(int num : nums)
            element ^= num;
        
        return element;
    }
};