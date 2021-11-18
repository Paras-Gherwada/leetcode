class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = 0;
        while(idx < word.size() && word[idx] != ch)
            ++idx;
        
        if(idx == word.size())
            return word;
        
        int copy_idx = idx;
        string temp = "";
        while(copy_idx >= 0) {
            temp = word[copy_idx] + temp;
            --copy_idx;
        }
        
        copy_idx = 0;
        while(copy_idx <= idx) {
            word[copy_idx] = temp[idx - copy_idx];
            ++copy_idx;
        }
        
        return word;
    }
};