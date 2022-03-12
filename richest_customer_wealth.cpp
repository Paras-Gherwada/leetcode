class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        for(vector<int> item : accounts) {
            int wealth = accumulate(item.begin(), item.end(), 0);
            if(wealth > max_wealth)
                max_wealth = wealth;
        }
        
        return max_wealth;
    }
};
