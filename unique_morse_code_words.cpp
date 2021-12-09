class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morseCodes[] =  {
            ".-",
            "-...",
            "-.-.",
            "-..",
            ".",
            "..-.",
            "--.",
            "....",
            "..",
            ".---",
            "-.-",
            ".-..",
            "--",
            "-.",
            "---",
            ".--.",
            "--.-",
            ".-.",
            "...",
            "-",
            "..-",
            "...-",
            ".--",
            "-..-",
            "-.--",
            "--.."
        };
        
        set<string> result;
        for(string word : words) {
            string morseCode = "";
            for(char c : word)
                morseCode += morseCodes[c - 'a'];
            
            result.insert(morseCode);
        }
        
        return result.size();
    }
};