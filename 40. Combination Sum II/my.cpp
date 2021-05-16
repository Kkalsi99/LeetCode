#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> sol;
map<int, int> counter;
void permutate(vector<int> &candidates, int target, vector<int> comb, map<int, int>::iterator l)
{
    if (target == 0)
    {
        sol.push_back(comb);
    }
    else
    {

        for (auto it = l; it != counter.end(); it++)
        {
            if (!it->second)
            {
                continue;
            }
            else
            {
                target -= it->first;
                it->second--;
                comb.push_back(it->first);
                if (target < 0)
                {

                    it->second++;
                    target += it->first;
                    comb.pop_back();
                    break;
                }
                permutate(candidates, target, comb, it);
                it->second++;
                target += it->first;
                comb.pop_back();
            }
        }
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<int> comb;
    sort(candidates.begin(), candidates.end());
    for (int i = 0; i < candidates.size(); i++)
    {
        counter[candidates[i]]++;
    }
    permutate(candidates, target, comb, counter.begin());
    return sol;
}