#include <bits/stdc++.h>
using namespace std;
int thirdMax(vector<int> &nums)
{

    set<int> temp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {

        if (temp.size() < 3)
        {
            temp.insert(nums[i]);
        }

        else
        {
            if (nums[i] > *temp.begin())
            {

                if (temp.insert(nums[i]).second)
                    temp.erase(temp.begin());
            }
        }
    }

    if (temp.size() == 2)
    {

        temp.erase(temp.begin());
    }

    return *temp.begin();
}