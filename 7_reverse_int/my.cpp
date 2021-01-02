#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    long int sol = 0;
    while (x)
    {
        if (sol * 10 + x % 10 >= INT_MAX || sol * 10 + x % 10 <= INT_MIN)
            return 0;
        else
            sol = sol * 10 + x % 10;
        x = x / 10;
    }
    return sol;
}
int main()
{
    cout << reverse(-321);
}