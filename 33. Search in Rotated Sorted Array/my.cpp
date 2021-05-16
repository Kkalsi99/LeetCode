#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target)
{
    int hi = nums.size() - 1, lo = 0;
    while (lo < hi)
    {
        int mid = (lo + hi + 1) / 2;
        if ((target < nums[0]) ^ (target > nums[mid]) ^ (nums[0] > nums[mid]))
        {
            lo = mid + 1;
        }
        else
            hi = mid;
    }
    return nums[lo] == target ? lo : -1;
}