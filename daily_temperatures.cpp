class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> result, indexes;
        
        for(int idx = temperatures.size() - 1; idx >= 0; --idx) {
            while(!indexes.empty() && temperatures[idx] >= temperatures[indexes.back()])
                indexes.pop_back();
            
            if(indexes.empty())
                result.push_back(0);
            else
                result.push_back(indexes.back() - idx);
            
            indexes.push_back(idx);
        }
        
        reverse(result.begin() , result.end());
        return result;
    }
};