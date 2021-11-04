class Solution {
public:
    bool checkPerfectNumber(int num) {
        int divisor = 1;
        int sum = 0;
        while(divisor <= num / 2) {
            if(num % divisor == 0)
                sum += divisor;
            
            ++divisor;
        }
        
        return sum == num;
    }
};