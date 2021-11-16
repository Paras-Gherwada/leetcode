class Solution {
public:
    string largestOddNumber(string num) {
        string oddString = "";
        
        for(int idx = num.size() - 1; idx >= 0; --idx) {
            if(((num[idx] - '0') & 1) == 1) {
                oddString = num.substr(0, idx + 1);
                break;
            }
        } 
        
        return oddString;
    }
};