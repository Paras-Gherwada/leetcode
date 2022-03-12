class Solution {
public:
    int countOrders(int n) {
        long result = 1;
        int mod_val = pow(10, 9) + 7;
        
        int value = 1;
        while(value <= n) {
            result *= value;
            result *= (2 * value - 1);
            result %= mod_val;
            
            ++value;
        }
        
        return result;
    }
};
