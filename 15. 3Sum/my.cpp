#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> sol;
    set<vector<int>> sl;
    sort(nums.begin(), nums.end());

    int n = nums.size();
    if (n <= 2)
        return {};
    if (nums[n - 1] == 0 && nums[0] == 0)
        return {{0, 0, 0}};

    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum == 0)
            {
                multiset<int> sorttemp;
                vector<int> temp;
                sorttemp.insert(nums[i]);
                sorttemp.insert(nums[j++]);
                sorttemp.insert(nums[k--]);
                for (auto &it : sorttemp)
                {
                    temp.push_back(it);
                }
                auto ret = sl.insert(temp);
                if (ret.second == 1)
                {
                    sol.push_back(temp);
                }
            }
            else if (sum < 0)
                j++;
            else if (sum > 0)
                k--;
        }
    }

    return sol;
}
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4, -2, -3, 3, 0, 4};
    threeSum(nums);
}