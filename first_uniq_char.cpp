class Solution {
public:
    int firstUniqChar(string s) {
	    if (s.size() == 0 || s.size() == 1) return s.size()-1;

	    for (int i = 0; i < s.size(); i++)
		    if (s.find(s[i]) == s.find_last_of(s[i]))
			    return i;
	    return -1;
    }
};
