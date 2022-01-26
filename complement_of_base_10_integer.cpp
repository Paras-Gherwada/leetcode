class Solution {
public:
    int bitwiseComplement(int num) {
        if(num == 0)
            return 1;
        
        vector<int> bin_stream;
        while(num > 0){
            bin_stream.push_back(!(num%2));
            num /= 2;
        }
        int multiplier = num;
        for(int bit : bin_stream){
            if(bit)
                num += pow((2*bit), multiplier);
            ++multiplier;
        }
        return num;
    }
};