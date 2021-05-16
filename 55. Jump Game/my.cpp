#include <bits/stdc++.h>
using namespace std;
bool canJump(vector<int> &nums)
{
    queue<int> q;
    q.push(0);
    int pos = 0;
    if (nums.size() <= 1)
        return 1;
    if (nums.size() == 2)
    {
        if (nums[0] == 0)
            return false;
        else
            return 1;
    }

    while (!q.empty())
    {

        if (q.front() == nums.size() - 1)
            return true;
        int n = q.size();
        for (int i = 0; i < n; i++)
        {

            int max = 0;
            for (int j = q.front() + 1; j <= q.front() + nums[q.front()] && j < nums.size(); j++)
            {

                if (nums[max] + max <= nums[j] + j)
                {
                    max = j;
                }
            }
            q.pop();

            if (max == nums.size() - 1)
                return true;
            if (nums[max] == 0)
            {
                return false;
            }
            q.push(max);
        }
    }
    return false;
}