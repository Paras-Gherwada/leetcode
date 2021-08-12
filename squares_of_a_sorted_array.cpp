class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> squares;
        for(int num : nums)
            squares.push_back(num*num);
        sort(squares.begin(), squares.end());
        return squares;
    }
};
