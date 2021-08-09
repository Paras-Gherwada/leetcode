class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr_count = 0, prev_count = 0;
        for(int bit : nums){
            if(bit) ++curr_count;
            else{
                if(curr_count > prev_count)
                    prev_count = curr_count;
                curr_count = 0;
            }
        }
        return max(curr_count, prev_count);
    }
};
