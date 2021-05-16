#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> sol;
map<int, int> counter;
void permuatate(vector<int> &candidates, int target, vector<int> comb, map<int, int>::iterator l)
{
    if (target == 0)
    {
        sol.push_back(comb);
    }

    if (target > 0)
    {
        for (auto it = l; it != counter.end(); it++)
        {

            comb.push_back(it->first);
            target -= it->first;
            if (target < 0)
            {
                target = target + comb.back();
                comb.pop_back();
                break;
            }
            permuatate(candidates, target, comb, it);
            target += it->first;
            comb.pop_back();
        }
    }
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    for (int i = 0; i < candidates.size(); i++)
    {
        counter[candidates[i]]++;
    }
    vector<int> comb;
    permuatate(candidates, target, comb, counter.begin());
    return sol;
}