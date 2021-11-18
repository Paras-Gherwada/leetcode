class Solution {
public:
    string sortSentence(string s) {
        vector<string> words;
        stringstream ss(s);
        string word;
        while(getline(ss, word, ' '))
            words.push_back(word);
        
        map<int, string> mapper;
        for(string v : words)
            mapper[v[v.size() - 1] - '0'] = v.substr(0, v.size() - 1);
        
        s = "";
        int idx = 0;
        for(auto it : mapper) {
            s += it.second;
            if(idx < words.size() - 1)
                s += " ";
            ++idx;
        }
        
        return s;
    }
};