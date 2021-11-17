class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count = 0;
        for(int idx = 0; idx < startTime.size(); ++idx)
            count += (startTime[idx] <= queryTime && endTime[idx] >= queryTime);
        
        return count;
    }
};