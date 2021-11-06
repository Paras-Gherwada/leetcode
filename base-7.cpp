class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0)
            return "0";
        
        int sign = num >= 0 ? 1 : -1;
        num *= sign;
        
        string result = "";
        while(num > 0) {
            result = to_string(num % 7) + result;
            num /= 7;
        }
        
        if(sign < 0)
            result = "-" + result;
        
        return result;
            
    }
};