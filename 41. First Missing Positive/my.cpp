#include <bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int> &nums)
{
    unordered_map<int, bool> nums_map;
    int min = INT_MAX;
    int max = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] >= 0)
        {
            nums_map[nums[i]] = 1;
            if (min > nums[i])
                min = nums[i];
            if (max < nums[i])
                max = nums[i];
        }
    }
    for (int i = min; i < max; i++)
    {
        if (nums_map.find(i) == nums_map.end())
        {
            return i;
        }
    }
    return max + 1;
}
