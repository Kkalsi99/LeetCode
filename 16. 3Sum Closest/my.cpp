#include <bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int> &nums, int target)
{
    int n = nums.size();
    int solution = INT_MAX;
    int diff = INT_MAX;

    int sum = 0;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;

        while (j < k)
        {
            sum = nums[i] + nums[j] + nums[k];
            int difftemp = ((target - sum) < 0) ? sum - target : target - sum;
            if (sum == target)
                return target;

            else if (diff > difftemp)
            {
                solution = sum;
                diff = difftemp;
            }
            else if (sum < target)
                j++;
            else if (sum > target)
                k--;
        }
    }
    return solution;
}
int main()
{
    vector<int> nums = {0, 2, 1, -3};
    cout << threeSumClosest(nums, -10);
}