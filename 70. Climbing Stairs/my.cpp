#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n)
{
    int a = 2, b = 3;
    int c = 0;
    if (n == 2)
        return a;
    if (n == 3)
        return 3;
    for (int i = 4; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
