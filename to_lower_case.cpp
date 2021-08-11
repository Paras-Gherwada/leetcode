class Solution {
public:
    string toLowerCase(string s) {
        int idx = 0;
        while(idx < s.size()){
            if(s[idx] >=  65 && s[idx] <= 90)
                s[idx] = (s[idx]+32);
            ++idx;
        }
        return s;
    }
};
