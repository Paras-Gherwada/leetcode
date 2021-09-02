class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        int counter = 0;
        for(int i_val : nums){
            counter = 0;
            for(int j_val : nums)
                if(i_val > j_val) ++counter;
            result.push_back(counter);
        }
        return result;
    }
