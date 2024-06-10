class Solution {
public:
    void maxProfitFinder(vector<int> &prices, int i, int &minPrice, int &maxProfit)
    {
        // base case .. 
        if(i==prices.size())
        return;
        // sol for 1 case ..  
        if(prices[i] < minPrice) minPrice = prices[i];
        int todayProfit = prices[i] - minPrice;

        if(todayProfit > maxProfit) 
        maxProfit = todayProfit;

        // recursive calls ... .
        maxProfitFinder(prices, i+1, minPrice, maxProfit);

    }
    int maxProfit(vector<int>& prices) {

        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;

        maxProfitFinder(prices, 0, minPrice, maxProfit);
        return maxProfit;
        
    }
};
// Time Complexity -- O(N)
// Space Complexity -- O(N)