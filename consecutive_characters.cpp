class Solution {
public:
    int maxPower(string s) {
        int power = 0, temp_power = 0;
        for(int idx = 1;  idx < s.size(); ++idx) {
            if(s[idx - 1] == s[idx]) {
                ++temp_power;
            } else {
                power = max(power, temp_power);
                temp_power = 0;
            }
        }
        
        power = max(power, temp_power);
        
        return power + 1;
    }
};