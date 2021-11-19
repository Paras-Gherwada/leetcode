class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int rule_idx;
        if(ruleKey == "type") rule_idx = 0;
        if(ruleKey == "color") rule_idx = 1;
        if(ruleKey == "name") rule_idx = 2;
        
        int counter = 0;
        for(vector<string> item : items)
            if(item[rule_idx] == ruleValue)
                ++counter;
        
        return counter;
    }
};