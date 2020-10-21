class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =  prices.size();
        int maxprofit = 0;
        for (int i = 0;i <= n - 2;i++){
            for(int j = i + 1;j<= n - 1;j++){
                int profit = prices[j] - prices[i];
                if (profit > maxprofit)
                    maxprofit = profit;
            } 
        }
        return maxprofit;
    }
};