class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int currentMin = prices[0];
        
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < currentMin) {
                currentMin = prices[i];
            } else {
                maxProfit = max(maxProfit, prices[i] - currentMin);
            }
        }

        return maxProfit;
    }
};