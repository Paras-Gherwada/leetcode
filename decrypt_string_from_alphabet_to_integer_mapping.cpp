class Solution {
public:
    string freqAlphabets(string s) {
        string result = "";
        int idx = s.size() - 1;
        while(idx >= 0) {
            if(s[idx] == '#' && idx - 2 >= 0) {
                result.push_back(stoi(s.substr(idx - 2, 2)) - 1 + 'a');
                idx -= 3;
            } else {
                result.push_back(s[idx] - '0' - 1 + 'a');
                --idx;
            }
        }
        
        for(int idx = 0;  idx < result.size() / 2; ++idx) {
            result[idx] ^= result[result.size() - idx - 1];
            result[result.size() - idx - 1] ^= result[idx];
            result[idx] ^= result[result.size() - idx - 1];
        }
        
        return result;
    }
};