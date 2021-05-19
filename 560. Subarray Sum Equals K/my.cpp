#include <bits/stdc++.h>
using namespace std;
//TLE
int subarraySum(vector<int> &nums, int k)
{

    int n = nums.size();

    int count = 0;
    vector<int> sums;
    sums.push_back(nums[0]);
    for (int i = 1; i < n; i++)
    {
        sums.push_back(sums[i - 1] + nums[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (sums[i] == k)
            count++;
        for (int j = 0; j < i; j++)
            if (sums[i] - sums[j] == k)
            {
                count++;
            }
    }
    return count;
}