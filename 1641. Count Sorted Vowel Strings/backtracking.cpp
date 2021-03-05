#include <bits/stdc++.h>
using namespace std;
int count(int n, char c = 'a')
{
    int sum = 0;

    if (n == 1 && c == 'a')
        return 5;
    else if (n > 1 && c == 'a')
        sum = count(n - 1, 'a') + count(n - 1, 'e') + count(n - 1, 'i') + count(n - 1, 'o') + count(n - 1, 'u');
    if (n == 1 && c == 'e')
        return 4;
    else if (n > 1 && c == 'e')
        sum = count(n - 1, 'e') + count(n - 1, 'i') + count(n - 1, 'o') + count(n - 1, 'u');
    if (n == 1 && c == 'i')
        return 3;
    else if (n > 1 && c == 'i')
        sum = count(n - 1, 'i') + count(n - 1, 'o') + count(n - 1, 'u');
    if (n == 1 && c == 'o')
        return 2;
    else if (n > 1 && c == 'o')
        sum = count(n - 1, 'o') + count(n - 1, 'u');
    if (n == 1 && c == 'u')
        return 1;
    else if (n > 1 && c == 'u')
        sum = count(n - 1, 'u');

    return sum;
}

int countVowelStrings(int n)
{
    return count(n);
}