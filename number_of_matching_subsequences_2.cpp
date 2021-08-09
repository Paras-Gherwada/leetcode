class Solution {
public:
    int ans=0;
    bool helper(const string &s, const string &word){
        size_t idx=0;    
        for(char c: word){
            idx= s.find_first_of(c,idx);
            if(idx++ == string::npos)
                return false;
        }
        return true;
    }
    
    int numMatchingSubseq(string s, vector<string>& words) {
        for(string word: words)
            if(helper(s, word)) ans++;
        return ans;
    }
};
