class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price_idx, idx, profit;
        min_price_idx = idx = profit = 0;
        while(idx < prices.size() - 1) {
            while(idx < prices.size() - 1 && prices[idx] >= prices[idx + 1])
                ++idx;
            min_price_idx = idx;
            while(idx < prices.size() - 1 && prices[idx] <= prices[idx + 1])
                ++idx;
            profit += prices[idx] - prices[min_price_idx];
        }
        
        return profit;
    }
};