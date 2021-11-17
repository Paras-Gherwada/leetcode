class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> counter;
        for(int val : arr)
            ++counter[val];
        
        int val;
        for(auto x : counter) {
            if(x.second > (arr.size() / 4)) {
                val = x.first;
                break;
            }
        }
        
        return val;
    }
};