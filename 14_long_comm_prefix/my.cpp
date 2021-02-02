#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.size() == 0)
        return "";
    if (strs.size() == 1)
        return strs[0];
    int i, j;

    for (i = 1; i < strs.size(); i++)
    {
        for (j = 0; j < strs[0].size(); j++)
        {
            if (strs[0][j] != strs[i][j])
                return strs[0].substr(0, j);
        }
    }
    return strs[0];
}
int main()
{
    vector<string> strs = {};
    cout << longestCommonPrefix(strs);
}