#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &nums)
{
    int n = nums.size() - 1;
    int i = n - 1;
    int j = n;
    for (; i > -1; i--)
    {
        if (nums[i] < nums[j])
        {

            break;
        }
        else
            j--;
    }
    if (i == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }
    int justgreater = INT_MAX;
    int justgreaterpos = j;
    for (; j >= 0 && j <= n; j++)
    {
        if (nums[i] < nums[j])
        {
            if (justgreater >= nums[j])
            {
                justgreater = nums[j];
                justgreaterpos = j;
            }
        }
    }
    justgreater = nums[justgreaterpos];
    nums[justgreaterpos] = nums[i];
    nums[i] = justgreater;
    reverse(nums.begin() + i + 1, nums.end());
}