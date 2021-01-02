#include <bits/stdc++.h>
using namespace std;
bool isMatch(string s, string p)
{
    int s_size = s.size();
    int p_size = p.size();
    int i = 0, j = 0;
    while (s_size > i || p_size > j)
    {
        if (p[j] == '.' || s[i] == p[j])
        {
            j++;
            i++;
            cout << i << ":" << j << endl;
        }
        else if (p[j] == '*')
        {
            while (p[j - 1] == s[i])
            {
                i++;
            }

            while (p[j - 1] == '.')
            {

                if (s[i] == s[i + 1] && i < s_size)
                    i++;
                else
                {
                    break;
                }
            }
            if (s[i] == s[i - 1] && i + 1 <= s_size)
                i++;

            j++;
            cout << "=" << i << ":" << j << endl;
        }
        else if (p[j] != s[i] && p[j + 1] == '*')
            j += 2;
        else
            return false;
    }

    if (s_size == i && p_size == j)
        return true;
    return false;
}
int main()
{
    string s = "ab";
    string p = ".*";
    cout << isMatch(s, p);
}