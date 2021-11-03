class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> copy_score(score.size(), -1);
        for(int val : score)
            copy_score.push_back(val);
        
        sort(copy_score.begin(), copy_score.end(), greater<>());
        
        map<int, string> mapper;
        int counter = 1;
        for(int rank : copy_score) {
            if(counter == 1) mapper[rank] = "Gold Medal";
            else if(counter == 2) mapper[rank] = "Silver Medal";
            else if(counter == 3) mapper[rank] = "Bronze Medal";
            else mapper[rank] = to_string(counter);
            ++counter;
        }
        
        vector<string> result;
        for(int rank : score)
            result.push_back(mapper[rank]);
        
        return result;
    }
};
