#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    if (x == 0)
        return true;
    if (x % 10 == 0)
        return false;
    if (x > 0)
    {
        int y = 0;
        while (y < x)
        {
            y = y * 10 + x % 10;

            x = x / 10;
        }
        if (x == y || x == y / 10)
            return true;
    }
    return false;
}
int main()
{
    cout << isPalindrome(1221);
}