class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while(getline(ss, word, ' '))
            words.push_back(word);
        
        if(pattern.size() != words.size())
            return false;
        
        unordered_map<char, string> um_1;
        unordered_map<string, char> um_2;
        
        um_1[pattern[0]] = words[0];
        um_2[words[0]] = pattern[0];
        
        for(int idx = 1; idx < pattern.size(); ++idx) {
            if(um_1[pattern[idx]] == "" && um_2[words[idx]] == '\0') {
                um_1[pattern[idx]] = words[idx];
                um_2[words[idx]] = pattern[idx];
            } else {
                if(um_1[pattern[idx]] != words[idx] || um_2[words[idx]] != pattern[idx])
                    return false;
            }
        }
         
        if(um_1.size() != um_2.size())
            return false;
        
        return true;
    }
};