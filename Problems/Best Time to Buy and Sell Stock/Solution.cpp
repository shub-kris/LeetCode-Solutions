class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int lowest = 0;
        for(int i=1; i<n; i++){
            if(prices[i] < prices[lowest])
                lowest = i;
            else
                profit = max(profit, prices[i]-prices[lowest]);
        }
        return profit;
    }
};