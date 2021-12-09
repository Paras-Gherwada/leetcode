class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> c_indices;
        for(int idx = 0; idx < s.size(); ++idx)
            if(s[idx] == c)
                c_indices.push_back(idx);
        
        vector<int> result;
        for(int idx = 0; idx < s.size(); ++idx) {
            int min_val = INT_MAX;
            if(s[idx] == c)
                min_val = 0;
            else
                for(int c_idx : c_indices)
                    min_val = min(min_val, abs(idx - c_idx));
            
            result.push_back(min_val);
        }
        
        return result;
    }
};