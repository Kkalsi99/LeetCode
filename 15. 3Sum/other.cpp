#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> sol = {};

        sort(nums.begin(), nums.end());

        int n = nums.size();
        if (nums[n - 1] == 0 && nums[0] == 0)
            return {{0, 0, 0}};

        for (int i = 0; i < n - 2; i++)
        {
            int j = i + 1;
            int k = n - 1;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            while (j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    while (j < k && nums[j] == nums[j + 1])
                        j++;
                    while (j < k && nums[k] == nums[k - 1])
                        k--;

                    sol.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if (sum < 0)
                    j++;
                else
                    k--;
            }
        }

        return sol;
    }
};