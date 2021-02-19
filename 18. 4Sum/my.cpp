#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> twosum(vector<int> &nums, int target, int start)
{
    vector<vector<int>> solution;
    int end = nums.size() - 1;
    while (start < end)
    {
        int sum = nums[start] + nums[end];
        if (sum == target)
        {
            while (start < end && nums[start] == nums[start + 1])
                start++;
            while (start < end && nums[end] == nums[end - 1])
            {
                end--;
            }
            solution.push_back({nums[start], nums[end]});
            start++;
            end--;
        }
        else if (sum < target)
            start++;
        else
            end--;
    }
    return solution;
}
vector<vector<int>> KSum(vector<int> &nums, int target, int start, int k)
{
    vector<vector<int>> solution;
    int end = nums.size() - 1;
    if (start == end + 1 || nums[start] * k > target || nums[end] * k < target)
        return solution;
    if (k == 2)
        return twosum(nums, target, start);

    for (int i = start; i <= end; i++)
    {
        if (i == start || nums[i - 1] != nums[i])
            for (auto &minisol : KSum(nums, target - nums[i], i + 1, k - 1))
            {
                solution.push_back({nums[i]});
                solution.back().insert(solution.back().end(), minisol.begin(), minisol.end());
            }
    }
    return solution;
}
vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    return KSum(nums, target, 0, 4);
}