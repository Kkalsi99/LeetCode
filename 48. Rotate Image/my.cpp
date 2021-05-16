#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        int temp = matrix[0][i];
        matrix[0][i] = matrix[n - 1][i];
        matrix[n - 1][i] = temp;
    }
    for (int j = 0; j < n / 2; j++)
    {
        swaps(matrix, n - j, j);
    }
}
void swaps(vector<vector<int>> &matrix, int n, int j)
{

    for (int i = j; i < n; i++)
    {
        int temp = matrix[j][i];
        matrix[j][i] = matrix[i][j];
        matrix[i][j] = temp;
    }
    for (int i = j + 1; i < n; i++)
    {
        int temp = matrix[n - 1 - j][i];
        matrix[n - 1 - j][i] = matrix[i][n - 1 - j];
        matrix[i][n - 1 - j] = temp;
    }
}