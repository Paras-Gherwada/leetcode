class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        for(int divisor = 1; divisor <= n /2; ++divisor)
            if(n % divisor == 0)
                ++count;
        
        return count + 1 == 3;
    }
};