class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0, largest_altitude = 0;
        for(int altitude : gain)
            largest_altitude = max(largest_altitude, sum += altitude);
        
        return largest_altitude;
    }
};