class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int shift_val  = 0;
        
        for(int idx = s.size() - 1; idx >= 0; --idx){
            shift_val += shifts[idx];
            shift_val %= 26;
                
            if(s[idx] + shift_val > 'z')
                s[idx] = s[idx] - 'z' + 'a' - 1;
            s[idx] += shift_val;
        }
        return s;
    }
};