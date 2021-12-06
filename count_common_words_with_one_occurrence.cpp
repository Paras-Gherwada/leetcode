class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int counter = 0;
        for(string word : words1)
            if((count(words1.begin(), words1.end(),  word) == 1) && (count(words2.begin(), words2.end(),  word) == 1))
                ++counter;
        
        return counter;
    }
};