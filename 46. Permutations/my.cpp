#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> sol;
void permutate(vector<int> &nums, int l)
{
    if (l == nums.size() - 1)
    {
        sol.push_back(nums);
    }
    else
    {
        for (int i = l; i < nums.size(); i++)
        {
            swap(nums[i], nums[l]);
            permutate(nums, l + 1);
            swap(nums[i], nums[l]);
        }
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    permutate(nums, 0);
    return sol;
}
