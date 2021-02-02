#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s)
{
    int res = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        switch (s[i])
        {
        case 'V':
            res += 5;
            break;
        case 'L':
            res += 50;
            break;
        case 'D':
            res += 500;
            break;
        case 'I':
            res += i < s.size() - 1 and s[i + 1] == 'V' or s[i + 1] == 'X' ? -1 : 1;
            break;
        case 'X':
            res += i < s.size() - 1 and s[i + 1] == 'L' or s[i + 1] == 'C' ? -10 : 10;
            break;
        case 'C':
            res += i < s.size() - 1 and s[i + 1] == 'D' or s[i + 1] == 'M' ? -100 : 100;
            break;
        default:
            res += 1000;
        }
    }
    return res;
}