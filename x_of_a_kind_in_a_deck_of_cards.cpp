class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> counter;
        for(int card : deck)
            ++counter[card];
        
        int val = counter.begin() -> second;
        for(auto x : counter)
            val = __gcd(val, x.second);
        
        return val >= 2;
    }
};