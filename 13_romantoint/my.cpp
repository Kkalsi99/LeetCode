#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s)
{
    map<char, int> roman;

    int num = 0;
    int n = s.size();
    roman['I'] = 1;

    roman['v'] = 5;

    roman['X'] = 10;

    roman['L'] = 50;

    roman['C'] = 100;

    roman['D'] = 500;

    roman['M'] = 1000;
    for (int x = 0; x < n; x++)
    {

        if (roman[s[x]] < roman[s[x + 1]])
        {

            num = num - roman[s[x]];
        }
        else
            num = num + roman[s[x]];
    }
    return num;
}
int main()
{
    cout << romanToInt("MXCIII");
}