class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mapper;
        for(char c : s)
            ++mapper[c];
        
        int total = 0, odd_count = 0, val;
        for(auto x : mapper) {
            val = x.second;
            if(val & 1) {
                val = val - 1;
                mapper[x.first] = 1;
                ++odd_count;
            }
            total += val;
        }
        
        return odd_count > 0 ? total + 1 : total;
    }
};