#include <bits/stdc++.h>
using namespace std;
bool buddyStrings(string a, string b)
{
    int ch1 = -1, ch2 = -1, found = 0, same = 0;
    if (a.size() != b.size())
    {
        return 0;
    }

    vector<int> temp(26, 0);

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {

            if (ch1 == -1)
                ch1 = i;
            else
                ch2 = i;
        }
        temp[a[i] - 'a']++;
    }
    if (ch1 != -1 && ch2 != -1)
    {

        if (a[ch1] == b[ch2] && a[ch2] == b[ch1])
            return 1;
    }
    if (ch1 != -1)
    {
        return 0;
    }
    if (temp.size() < a.size())
    {
        return 1;
    }

    return 0;
}