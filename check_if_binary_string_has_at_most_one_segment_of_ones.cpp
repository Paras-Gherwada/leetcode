class Solution {
public:
    bool checkOnesSegment(string s) {
        for(int idx = 1; idx < s.size(); ++idx)
			if(s[idx - 1] == '0' and s[idx] == '1')
				return false;
			
		return true;
    }
};