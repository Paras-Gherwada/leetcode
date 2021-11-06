class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mapper;
        for(int val : arr)
            ++mapper[val];
        
        vector<int> counter;
        for(auto x : mapper)
            counter.push_back(x.second);
        
        sort(counter.begin(), counter.end());
        
        for(int idx = 0; idx < counter.size() - 1; ++idx)
            if (counter[idx] == counter[idx + 1])
                return false;
        
        return true;
    }
};