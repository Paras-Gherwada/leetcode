class Solution {
public:
    bool wordValid(string word, string row){
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        sort(word.begin(), word.end());
        word.erase(unique(word.begin(), word.end()), word.end());
        
        for(char chr : word)
            if(row.find(chr) == std::string::npos) return false;
        return true;
    }
    
    vector<string> findWords(vector<string>& words) {
        vector<string> rows(3);
        rows.push_back("qwertyuiop");
        rows.push_back("asdfghjkl");
        rows.push_back("zxcvbnm");
        
        vector<string> ans;
        int word_size;
        for(string word : words){
            word_size = word.size();
            for(int row_idx = 0; row_idx < rows.size(); ++row_idx){
                if(wordValid(word, rows[row_idx])){
                    ans.push_back(word);
                    break;
                }
            }
        }
        return ans;
    }
};
