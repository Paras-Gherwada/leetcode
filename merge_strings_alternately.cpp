class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size = min(word1.size(), word2.size());
        string result = "";
        int idx = 0;
        while(idx < size) {
            result += word1[idx];
            result += word2[idx];
            ++idx;
        }
        
        while(idx < word1.size()) {
            result += word1[idx];
            ++idx;
        }
        
        while(idx < word2.size()) {
            result += word2[idx];
            ++idx;
        }
        
        return result;
    }
};