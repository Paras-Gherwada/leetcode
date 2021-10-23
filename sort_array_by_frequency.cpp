class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int max_ele = *max_element(nums.begin(), nums.end());
        int min_ele = *min_element(nums.begin(), nums.end());
        
        map<int, int> temp;
        for(int val : nums) ++temp[val];
        
        multimap<int, int> mapper;
        int maxFreq = 0;
        for(auto x : temp) {
            mapper.insert({x.second, x.first});
            if(x.second > maxFreq) maxFreq = x.second;
        }
        
        vector<vector<int>> result(maxFreq);
        for(auto x : mapper) result[x.first - 1].push_back(x.second);
        
        nums.clear();
        for(int freq = 0; freq < maxFreq; ++freq) {
            sort(result[freq].begin(), result[freq].end());
            for(int idx = result[freq].size() - 1; idx >= 0; --idx)
                for(int count = freq + 1; count > 0; --count)
                    nums.push_back(result[freq][idx]);
        }
        
        
        return nums;
    }
};