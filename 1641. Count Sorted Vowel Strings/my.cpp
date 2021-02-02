#include <bits/stdc++.h>
using namespace std;

int countVowelStrings(int n)
{
    int sums[] = {1, 1, 1, 1, 1};
    if (n == 1)
        return 5;

    while (n--)
    {
        int temp = 1;
        for (int i = 1; i < 5; i++)
        {
            temp = temp + sums[i];
            sums[i] = temp;
        }
    }
    return sums[4];
}
int main()
{
    cout << countVowelStrings(1);
}