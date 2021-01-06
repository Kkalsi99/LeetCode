#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int min = INT_MAX;
    int i = 0, j = 1;
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (prices[i] < min)
        {
            min = prices[i];
        }
        else if (profit < prices[i] - min)
        {
            profit = prices[i] - min;
        }
    }
    return profit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
}