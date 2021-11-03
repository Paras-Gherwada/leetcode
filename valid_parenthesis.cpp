class Solution {
public:
    bool isValid(string s) {
        string brackets = "";
        
        for(char c : s) {
            if(brackets.size() > 0 && c == ')' && brackets[brackets.size() - 1] == '(')
                brackets.pop_back();
            else if(brackets.size() > 0 && c == ']' && brackets[brackets.size() - 1] == '[')
                brackets.pop_back();
            else if(brackets.size() > 0 && c == '}' && brackets[brackets.size() - 1] == '{')
                brackets.pop_back();
            else
                brackets += c;
        }
        
        return brackets.size() == 0;
    }
};