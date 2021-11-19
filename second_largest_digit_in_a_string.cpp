class Solution {
public:
    int secondHighest(string s) {
        map<int, int> mapper;
        for(char c : s)
            if(isdigit(c))
                ++mapper[c - '0'];
        
        vector<int> digits;
        for(auto it : mapper)
            digits.push_back(it.first);
        
        int second_largest = -1;
        if(digits.size() > 1) {
            digits.pop_back();
            second_largest = digits[digits.size() - 1];
        }
        
        return second_largest;
    }
};