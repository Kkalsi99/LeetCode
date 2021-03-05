#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s)
{
    int cur = 0;

    int n = s.size();
    while (s[n - 1] == ' ')
    {
        n--;
        if (!n)
            break;
    };

    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
            cur++;
        else
        {

            return cur;
        }
    }

    return cur;
}