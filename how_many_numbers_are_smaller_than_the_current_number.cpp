class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i_idx, j_idx, counter, size = nums.size();
        i_idx = j_idx = counter = 0;
        vector<int> result;
        while(i_idx < size){
            j_idx = counter = 0;
            while(j_idx < size){
                if(nums.at(i_idx) > nums.at(j_idx))
                    ++counter;
                ++j_idx;
            }
            result.push_back(counter);
            ++i_idx;
        }
        return result;
    }
};
