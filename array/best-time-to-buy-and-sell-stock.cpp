class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxPrice = 0;

        while (!prices.empty()) {

            bool remove = false;

            for (int i = 1; i < prices.size(); ++i) {

                if (prices[0] > prices[i]) {
                    // First element is larger, remove it
                    prices.erase(prices.begin());
                    remove = true;
                    break;
                }
            }

            if (!remove) break; // if no element is smaller, stop
        }

        for (int j = 0; j < prices.size(); ++j){
            if (prices.size() == 1){
                maxPrice = prices[0];
            } else if (prices[j] < prices[j + 1]) {
                maxPrice = prices[j + 1];
            }
        }

        return maxPrice - prices[0];
    }
};