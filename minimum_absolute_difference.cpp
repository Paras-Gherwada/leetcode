class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        int min_diff = 9999;
        for(int idx = 0; idx < arr.size() - 1; ++idx)
                min_diff = min(min_diff, arr[idx + 1] - arr[idx]);
        
        vector<vector<int>> result;
        for(int idx = 0; idx < arr.size() - 1; ++idx)
            if(arr[idx + 1] - arr[idx] == min_diff)
                result.push_back({arr[idx], arr[idx + 1]});
                
        return result;
    }
};