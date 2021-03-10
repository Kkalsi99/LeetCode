#include <bits/stdc++.h>
using namespace std;
int recurshift(int &dividend, int divisor)
{

    int f = 0;
    int sol = 1;
    while (divisor <= dividend && divisor < 1073741824)
    {
        divisor = divisor << 1;
        sol = sol << 1;
        f = 1;
    }
    if (f)
    {
        divisor = divisor >> 1;
        sol = sol >> 1;
    }

    dividend -= divisor;
    return sol;
}
int divide(int dividend, int divisor)
{
    long long int sol = 0;
    int sign = 0;
    if (divisor == 1)
        return dividend;
    if (dividend == divisor)
        return 1;
    if (dividend == INT_MIN)
    {
        if (divisor == -1)
            return INT_MAX;
        else if (divisor > 0)
        {
            dividend = dividend + divisor;
            sol++;
        }
        else
        {
            dividend = dividend - divisor;
            sol++;
        }
    }
    else if (divisor == INT_MIN)
    {
        return 0;
    }
    if (divisor < 0)
    {
        divisor = ~divisor + 1;
        sign++;
    }

    if (dividend < 0)
    {
        dividend = ~dividend + 1;
        sign++;
    }

    while (dividend >= divisor)
        sol = sol + recurshift(dividend, divisor);
    if (sign == 1)
    {
        sol = ~sol + 1;
    }
    return sol;
}
int main()
{
}