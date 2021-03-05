#include <bits/stdc++.h>
using namespace std;
void backtrack(vector<string> &ans, string curr, int open, int close, int max)
{
    if (curr.length() == 2 * max)
    {
        ans.push_back(curr);
    }
    if (open < max)
        backtrack(ans, curr + '(', open + 1, close, max);
    if (close < open)
        backtrack(ans, curr + ')', open, close + 1, max);
}
vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    backtrack(ans, "", 0, 0, n);
    return ans;
}