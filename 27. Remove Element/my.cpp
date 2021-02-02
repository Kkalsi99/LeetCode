#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int> &nums, int val)
{

    int n = nums.size(), tmp;
    if (n == 0)
        return {};
    else if (n == 1)
        if (val == nums[0])
            return {};
        else
            return 1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == val)
        {
            tmp = nums[n - 1];
            nums.pop_back();
            nums[i] = nums[n - 1];
            if (nums[i] == val)
            {
                i--;
            }
            n--;
        }
    }
    return n;
}
int main()
{
    vector<int> nums = {4, 5};
    cout << removeElement(nums, 5);
}