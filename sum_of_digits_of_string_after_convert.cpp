class Solution {
public:
    int getLucky(string s, int k) {
        string my_str = "";
        for(char c : s) my_str += to_string(c - 'a' + 1);
        
        while(k > 0) {
            int sum = 0;
            for(char c : my_str) sum += (c - '0');
            my_str = to_string(sum);
            --k;
        }
        
        return stoi(my_str);
    }
};