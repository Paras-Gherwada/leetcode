class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> answer;
        
        for(int val : nums) answer.push_back(val);
        for(int val : nums) answer.push_back(val);
        
        return answer;
    }
};