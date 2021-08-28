class Solution {
public:
    int maximum69Number (int num) {
        vector<int> num_stream;
        int digit = 0;
        while(num > 0){
            digit = num % 10;
            num_stream.insert(num_stream.begin(), digit);
            num /= 10;
        }
        
        for(digit = 0; digit < num_stream.size(); ++digit){
            if(num_stream.at(digit) == 6){
                num_stream[digit] = 9;
                break;
            }
        }
        
        digit = 0;
        for(int val : num_stream)
            digit = (digit*10)+val;
        
        return digit;
    }
};
