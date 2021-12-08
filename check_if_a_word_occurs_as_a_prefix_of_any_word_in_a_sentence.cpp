class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words;
        stringstream ss(sentence);
        string word;
        while(getline(ss, word, ' '))
            words.push_back(word);
        
        int word_idx = -1;
        for(int idx = 0; idx < words.size(); ++idx) {
            if(words[idx].substr(0, searchWord.size()) == searchWord) { 
                word_idx = idx + 1;
                break;
            }
        }
        
        return word_idx;
    }
};