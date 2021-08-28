class Solution {
public:
    int maximum69Number (int num) {
        string num_string = to_string(num);
        int idx = 0;
        while(idx < num_string.size()){
            if(num_string[idx] == '6'){
                num_string[idx] = '9';
                break;
            }
            ++idx;
        }
        return stoi(num_string);
    }
};
