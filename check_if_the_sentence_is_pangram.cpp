class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> alphabets(26, false);
        for(char c : sentence)
            alphabets[c - 'a'] = true;
        
        return !(count(alphabets.begin(), alphabets.end(), false));
    }
};