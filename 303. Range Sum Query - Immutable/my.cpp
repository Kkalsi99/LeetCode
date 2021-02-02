#include <bits/stdc++.h>
using namespace std;

class NumArray
{
private:
    vector<int> sums;

public:
    NumArray(vector<int> &nums)
    {
        sums.push_back(0);
        int sum = 0;
        for (auto n : nums)
        {
            sum += n;

            sums.push_back(sum);
        }
    }

    int sumRange(int i, int j)
    {
        return (sums[j + 1] - sums[i]);
    }
};
int main()
{
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    int i = 2, j = 5;
    NumArray *obj = new NumArray(nums);
    int param_1 = obj->sumRange(i, j);
    cout << param_1;
}