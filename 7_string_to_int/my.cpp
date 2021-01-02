#include <bits/stdc++.h>
using namespace std;

int myAtoi(string str)
{
    int i = 0;
    int sign = 1;
    long int sol = 0;
    if (str.length() == 0)
        return 0;

    while (i < str.length() && str[i] == ' ')
        i++;

    if (i < str.length() && (str[i] == '+' || str[i] == '-'))
        sign = (str[i++] == '-') ? -1 : 1;

    while (i < str.length() && str[i] >= '0' && str[i] <= '9')
    {
        if (sol > INT_MAX / 10 ||
            (sol == INT_MAX / 10 && str[i] - '0' > INT_MAX % 10))
        {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        sol = sol * 10 + (str[i++] - '0');
    }
    sol = sol * sign;
    if (sol > INT_MAX)
        return INT_MAX;
    if (sol < INT_MIN)
        return INT_MIN;
    else
    {
        return sol;
    }
}
int main()
{
    string s = "     -512 a";
    cout << myAtoi(s);
}
