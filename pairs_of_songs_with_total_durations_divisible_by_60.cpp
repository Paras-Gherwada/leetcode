class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        int values[60] = {};
        for(int duration : time) {
            int remainder = (duration % 60);
            count += (remainder == 0) ? values[0] : values[60 - remainder];
            ++values[remainder];
        }
        return count;
    }
};