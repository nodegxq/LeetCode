class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price; // update minPrice when a new lower price is found
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice; // update maxProfit if current profit is higher
            }
        }

        return maxProfit;
    }
};
