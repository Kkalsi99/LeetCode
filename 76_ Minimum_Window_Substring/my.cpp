#include <bits/stdc++.h>
using namespace std;
int checksub(unordered_map<char, int> count, unordered_map<char, int> str1, string t, int i, int j)
{

    int y = 0;
    int f = 1;

    for (auto x : str1)
    {
        if (count[x.first] >= str1[x.first])
        {

            f = 1;
        }
        else
        {
            f = 0;
            break;
        }
    }
    if (f)
        return 1;
    return 0;
}
string minWindow(string s, string t)
{
    int count = 0;
    unordered_map<char, int> str;
    unordered_map<char, int> str1;
    int S = s.size();
    int T = t.size();
    int i = 0, j = 0;
    int min = S;
    if (T > S)
        return "";
    if (s == t)
        return s;

    string sol;
    int found = 0;
    for (int x = 0; x < T; x++)
    {
        str[s[x]]++;
        str1[t[x]]++;
    }

    while (i < S, j < S)
    {

        if (min > (j - i))
        {

            if (!checksub(str, str1, t, i, j))
            {
                j++;
                str[s[j]]++;
            }
            else if (checksub(str, str1, t, i, j))
            {

                count = i;
                min = j - i;
                cout << i << " " << j << " " << s.substr(i, j - i + 1) << endl;
                sol = s.substr(i, j - i + 1);

                str[s[i]]--;

                i++;
            }
        }
        else
        {

            str[s[i]]--;
            i++;
        }
    }

    return sol;
}
int main()
{
    string s = "ABC";
    string t = "BC";
    cout << minWindow(s, t);
}