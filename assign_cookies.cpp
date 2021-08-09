class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int size = s.size();
        while(g.size() && s.size()){
            if(s.back() >= g.back())
                s.pop_back();
            g.pop_back();
        }
        
        return size-s.size();
    }
};
