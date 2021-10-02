class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size(), sum = 0;
        
        for(int row_idx = 0; row_idx < size; ++row_idx)
            sum += (mat[row_idx][row_idx] + mat[row_idx][size - row_idx - 1]);
        
        if(size & 1)
            sum -= (mat[size / 2][size / 2]);
        
        return sum;
    }
};