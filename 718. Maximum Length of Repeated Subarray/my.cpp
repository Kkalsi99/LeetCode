#include <bits/stdc++.h>
using namespace std;
int findLength(vector<int> &nums1, vector<int> &nums2)
{
    int n = nums1.size() + 1;
    int m = nums2.size() + 1;
    int sol = 0;

    // vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
    int dp[1001][1001] = {0};
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (nums2[i - 1] == nums1[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                sol = max(sol, dp[i][j]);
            }
        }
    }

    return sol;
}