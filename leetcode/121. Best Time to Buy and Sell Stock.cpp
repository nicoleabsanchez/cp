class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int l = 0, r = 1;
        int max_profit = 0;
        while (l < r && r < prices.size())
        {
            // is this profitable transaction
            if (prices[l] < prices[r])
            {
                int profit = prices[r] - prices[l];
                max_profit = max(profit, max_profit);
            }
            else
                l = r;
            r++;
        }

        return max_profit;
    }
};