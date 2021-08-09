class Solution {
public:
    
    vector<int> getCharCount(string& s){
        vector<int> char_count(26, 0);
        for(char chr : s )
            ++char_count[chr - 'a'];
        return char_count;
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>> count_of_both(2, vector<int>(26));
        count_of_both[0] = getCharCount(s);
        int count = words.size();        
        
        for(string word : words){
            count_of_both[1] = getCharCount(word);
            for(int idx = 0; idx < 26; ++idx){
                if(count_of_both[0][idx] < count_of_both[1][idx]){
                    --count;
                    break;
                }
            }
        }
        
        return count;
    }
