class Solution {
public:
    int numDifferentIntegers(string word) {
        unordered_set<string> set;
        string dig = "";
        if(word[0] <= 57)
            dig += word[0];
        
        for(int i = 1; i < word.size(); ++i) {
            if(word[i] <= 57){
                if(dig[0] == '0' && dig.size() == 1)
                    dig = "";
                dig += word[i];
            }
            
            if(word[i - 1] <= 57 && word[i] > 57) {
                set.insert(dig);
                dig = "";
            }
        }
        
        if(word[word.size() - 1] <= 57)
            set.insert(dig);
        
        return set.size();
    }
};