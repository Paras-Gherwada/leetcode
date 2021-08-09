class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size() - 1;
        while(size >= 0 && digits[size] == 9){
            digits[size] = 0;
            size--;
        }
        if(size >= 0) digits[size]++;
        else digits.insert(digits.begin(), 1);
        return digits;
    }
};
