#include <bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n)
{
    int *arr[m];

    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = (i == 0 || j == 0) ? 1 : 0;
        }
    }
    for (int i = 1; i < m; i++)
    {

        for (int j = 1; j < n; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }
    return arr[m - 1][n - 1];
}