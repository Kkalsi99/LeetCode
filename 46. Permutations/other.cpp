#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> sol;
void permutate(vector<int> comb, map<int, int> counter, int n)
{
    if (comb.size() == n)
    {
        sol.push_back(comb);
    }
    else
    {
        for (auto it = counter.begin(); it != counter.end(); it++)
        {
            if (it->second == 0)
            {

                continue;
            }
            else
            {

                it->second--;

                comb.push_back(it->first);

                permutate(comb, counter, n);
                it->second++;
                comb.pop_back();
            }
        }
    }
}
vector<vector<int>> permuteUnique(vector<int> &nums)
{
    map<int, int> counter;
    for (int i = 0; i < nums.size(); i++)
    {
        counter[nums[i]]++;
    }
    vector<int> comb;

    permutate(comb, counter, nums.size());
    return sol;
}