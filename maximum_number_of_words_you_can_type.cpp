class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream ss(text);
        string word;
        int counter = 0;
        while(getline(ss, word, ' ')) {
            bool broken_char = false;
            for(char c : word) {
                for(char bk_ltr : brokenLetters) {
                    if(c == bk_ltr) {
                        broken_char = true;
                        break;
                    }
                }
            }
            
            if(!broken_char)
                ++counter;
            
        }
        
        return counter;
    }
};