class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sum = duration;
        for(int idx = 1; idx < timeSeries.size(); ++idx)
            sum += min(timeSeries[idx] - timeSeries[idx-1], duration);
        return sum;
    }
};
