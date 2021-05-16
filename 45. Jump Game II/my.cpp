#include <bits/stdc++.h>
using namespace std;

int jump(vector<int> &nums)
{
    if (nums.size() <= 1)
        return 0;
    if (nums.size() == 2)
        return 1;
    queue<int> q;
    q.push(0);
    int jumps = 0;
    while (!q.empty())
    {
        if (nums.size() - 1 == q.front())
            return jumps;
        int n = q.size();

        for (int i = 0; i < n; i++)
        {
            int Max = 0;
            int j = -1;

            for (j = q.front() + 1; j <= q.front() + nums[q.front()] && j < nums.size(); j++)
            {
                if (nums.size() - 1 == j)
                    return ++jumps;
                if (nums[Max] + Max <= nums[j] + j)
                {
                    Max = j;
                }
            }

            q.pop();
            if (Max)
            {
                jumps++;
                q.push(Max);
            }
        }
    }
    return jumps;
}