#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int> &nums, int target)
{
    int lo = 0, hi = nums.size() - 1;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target)
            return mid;

        else if (nums[mid] < target)
            lo = mid + 1;

        else
            hi = (mid - 1);
    }

    return lo;
}
int main()
{
    vector<int> nums = {0, 3, 5, 6};
    cout << searchInsert(nums, 2);
}