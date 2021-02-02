#include <bits/stdc++.h>
using namespace std;
int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    int sum = 0;
    int f1 = 0, f2 = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        int f0 = cost[i] + min(f1, f2);
        f2 = f1;
        f1 = f0;
    }
    return sum;
}
int main()
{
    vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
    cout << minCostClimbingStairs(cost);
}