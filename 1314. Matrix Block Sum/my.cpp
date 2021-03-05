#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int K)
{
    vector<vector<int>> answer;
    vector<vector<int>> dp;

    for (int i = 0; i < mat.size(); i++)
    {
        vector<int> temp;
        for (int j = 0; j < mat[i].size(); j++)
        {
            temp.push_back(mat[i][j] + ((i - 1 >= 0) ? dp[i - 1][j] : 0));
        }
        dp.push_back(temp);
    }
    for (int i = 0; i < mat.size(); i++)
    {

        for (int j = 1; j < mat[i].size(); j++)
        {
            dp[i][j] += dp[i][j - 1];
        }
    }

    for (int i = 0; i < mat.size(); i++)
    {
        vector<int> temp;
        for (int j = 0; j < mat[i].size(); j++)
        {

            int bigmat = dp[(i + K < mat.size()) ? i + K : mat.size() - 1][(j + K < mat[i].size()) ? j + K : mat[i].size() - 1];
            int smallmat1 = ((i - K - 1 >= 0) ? dp[i - K - 1][(j + K < mat[i].size()) ? j + K : mat[i].size() - 1] : 0);
            int smallmat2 = ((j - K - 1 >= 0) ? dp[(i + K < mat.size()) ? i + K : mat.size() - 1][j - K - 1] : 0);
            int common = ((j - K - 1 >= 0 && i - K - 1 >= 0) ? dp[i - K - 1][j - K - 1] : 0);
            temp.push_back(bigmat - smallmat1 - smallmat2 + common);
        }
        answer.push_back(temp);
    }
    return answer;
}