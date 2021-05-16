#include <bits/stdc++.h>
using namespace std;
int countPrimes(int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        int j = i + 1;
        for (j; j < n / 2; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j != n / 2)
        {
            count++;
        }
    }
}