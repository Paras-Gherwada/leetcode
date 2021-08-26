class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count_negatives = 0;
        for(vector<int> row : grid){
            for(int value : row){
                if(value < 0)
                    ++count_negatives;
            }
        }
        return count_negatives;
    }
};
