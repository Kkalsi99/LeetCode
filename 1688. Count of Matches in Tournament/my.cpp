#include <bits/stdc++.h>
using namespace std;
int numberOfMatches(int n)
{
    int sum = 0;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 1)
        sum = n / 2 + numberOfMatches(n / 2 + 1);
    else
        sum = n / 2 + numberOfMatches(n / 2);
    return sum;
}
int main()
{
    cout << numberOfMatches(10);
}