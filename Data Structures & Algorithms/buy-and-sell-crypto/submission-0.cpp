class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long long min_of_prices = prices[0];   
        long long max_profit = 0;              

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] - min_of_prices > max_profit) {
                max_profit = prices[i] - min_of_prices;
            }

            if (prices[i] < min_of_prices) {
                min_of_prices = prices[i];
            }
        }

        return (int)max_profit;
    }
};
