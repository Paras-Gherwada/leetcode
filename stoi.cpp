class Solution {
public:
    int myAtoi(string str) {
        long result=atol(str.c_str());
        if(result>=INT_MAX) return INT_MAX;
        if(result<=INT_MIN) return INT_MIN;
        return result;
    }
};
