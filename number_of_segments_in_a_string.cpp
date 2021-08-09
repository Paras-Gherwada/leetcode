class Solution {
public:
    int countSegments(string s) {
        int segment = 0;
        for(int idx = 0; idx < s.size(); ++idx){
            if(s[idx] != ' ')
                ++segment;
            while(idx < s.size() && s[idx] != ' ') ++idx;
        }
        
        return segment;
    }
};
