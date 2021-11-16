class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for(int value = left; value <= right; ++value) {
            bool flag = false;
            for(vector<int> range : ranges) {
                if(value >= range[0] and value <= range[1]) {
                    flag = true;
                    break;
                }
            }
            if(flag == false)
                return false;
        }
        return true;
    }
};