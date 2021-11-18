class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(string operation : operations) {
            x += (operation == "++X" || operation == "X++");
            x -= (operation == "--X" || operation == "X--");
        }
        
        return x;
    }
};