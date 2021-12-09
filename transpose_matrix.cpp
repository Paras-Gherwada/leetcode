class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> result(matrix[0].size());
        for(int r_idx = 0; r_idx < matrix[0].size(); ++r_idx)
            for(int c_idx = 0; c_idx < matrix.size(); ++c_idx)
                result[r_idx].push_back(matrix[c_idx][r_idx]);
        
        return result;
    }
};