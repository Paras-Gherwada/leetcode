class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_value = INT_MAX;
        int profit = 0;
        for(int idx = 0; idx < prices.size(); ++idx) {
            if(prices[idx] < min_value)
                min_value = prices[idx];
            if(prices[idx] - min_value > profit)
                profit = prices[idx] - min_value;
        }
        
        return profit;
    }
};