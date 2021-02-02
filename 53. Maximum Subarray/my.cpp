#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    int maxs = nums[0], sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum < 0)
            sum = 0;
        sum += nums[i];
        maxs = max(sum, maxs);
    }
    return maxs;
}
int main()
{
    vector<int> sum = {-1, -2};
    cout << maxSubArray(sum);
}
