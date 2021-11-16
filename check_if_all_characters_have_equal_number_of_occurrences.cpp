class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mapper;
        
        for(char c : s)
            ++mapper[c];
        
        vector<int> counts;
        for(auto it : mapper)
            counts.push_back(it.second);
        
        for(int idx = 1; idx < counts.size(); ++idx)
            if(counts[idx - 1] != counts[idx])
                return false;
        
        return true;
    }
};