#include <bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int> &nums, int target)
{
    int lo = 0;
    int hi = nums.size() - 1;
    int mid;
    vector<int> sol;
    if (!nums.size())
    {
        return {-1, -1};
    }
    if (nums.size() == 2)
    {
        if (nums[0] == target)
        {
            sol.push_back(0);
        }
        if (nums[1] == target)
        {
            sol.push_back(1);
        }
        if (sol.size() == 1)
        {
            sol.push_back(sol[0]);
        }
        if (sol.size() == 0)
            return {-1, -1};
        return sol;
    }
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (mid > 0)
        {
            if (nums[mid] == target && nums[mid - 1] == target)
                hi = mid - 1;
            else if (nums[mid] > target)
                hi = mid - 1;
            else if (nums[mid] < target)
                lo = mid + 1;
            else if (nums[mid] == target && nums[mid - 1] != target)
                break;
        }
        else
        {
            break;
        }
    }

    if (nums[mid] == target)
        sol.push_back(mid);
    else
        sol.push_back(-1);
    lo = 0;
    hi = nums.size() - 1;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (mid < nums.size() - 1)
        {

            if (nums[mid] == target && nums[mid + 1] == target)
                lo = mid + 1;
            else if (nums[mid] > target)
                hi = mid - 1;
            else if (nums[mid] < target)
                lo = mid + 1;
            else if (nums[mid] == target && nums[mid + 1] != target)
                break;
        }
        else
            break;
    }

    if (nums[mid] == target)
        sol.push_back(mid);
    else
        sol.push_back(-1);

    return sol;
}
int main()
{
    vector<int> nums = {5, 7, 7, 8, 8, 10};

    searchRange(nums, 8);
}