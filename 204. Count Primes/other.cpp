#include <bits/stdc++.h>
using namespace std;
int countPrimes(int n)
{
    vector<bool> isprime(n, true);
    int count = n;
    for (int i = 2; i * i < n; i++)
    {
        if (!isprime[i])
            continue;
        for (int j = i * i; j < n; j = j + i)
        {
            isprime[j] = false;
            count--;
        }
    }
}