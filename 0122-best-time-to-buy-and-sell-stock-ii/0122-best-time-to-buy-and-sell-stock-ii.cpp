class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int sizePrices = prices.size();
        int ans = 0;
        
        for(int i=1; i<sizePrices; i++) {
            if(prices[i] > prices[i-1]) {
                ans += (prices[i] - prices[i-1]);
            }
        }
        
        return ans;
    }
};