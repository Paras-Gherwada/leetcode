class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> words;
        string word;
        stringstream ss1(s1);
        while(getline(ss1, word, ' '))
            words.push_back(word);
        
        unordered_map<string, int> mapper;
        for(string word : words)
            ++mapper[word];
        
        words.clear();
        stringstream ss2(s2);
        while(getline(ss2, word, ' '))
            words.push_back(word);
        
        for(string word : words)
            ++mapper[word];
        
        words.clear();
        for(auto it : mapper)
            if(it.second == 1)
                words.push_back(it.first);
        
        return words;
    }
};