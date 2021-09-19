class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_idx, t_idx, char_counter;
        s_idx = t_idx = char_counter = 0;
        
        while(s_idx < s.size() && t_idx < t.size()) {
            
            if(s[s_idx] == t[t_idx]) {
                ++s_idx;
                ++char_counter;
            }
            
            ++t_idx;
        }
        
        return (char_counter == s.size());
    }
};
