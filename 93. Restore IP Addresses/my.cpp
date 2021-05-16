#include <bits/stdc++.h>
using namespace std;
vector<string> sol;

bool checknum(string ss)
{

    if (ss.size() > 1)
    {

        if (ss[0] == '0')
            return false;
    }
    int temp = 0;
    for (int i = 0; i < ss.size(); i++)
    {
        temp = temp * 10 + (ss[i] - '0');
    }

    if (temp < 256)
    {
        return true;
    }
    return false;
}
void backtrack(string s, string temp, int level, int str)
{

    if (s.size() < 4)
    {
        return;
    }

    if (level >= 4 && s.size() == temp.size() - 4)
    {
        temp.pop_back();

        sol.push_back(temp);
    }
    else
    {
        for (int i = level; i < 4; i++)
        {
            if (str < s.size())
                backtrack(s, temp + s.substr(str, 1) + '.', i + 1, str + 1);
            if ((str < s.size() - 1))
                if (checknum(s.substr(str, 2)))
                    backtrack(s, temp + s.substr(str, 2) + '.', i + 1, str + 2);
            if ((str < s.size() - 2))
                if (checknum(s.substr(str, 3)))
                    backtrack(s, temp + s.substr(str, 3) + '.', i + 1, str + 3);
        }
    }
}
vector<string> restoreIpAddresses(string s)
{
    string temp;
    backtrack(s, temp, 0, 0);
    return sol;
}