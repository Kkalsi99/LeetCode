#include <bits/stdc++.h>
using namespace std;
bool sortcol(const vector<int> &v1,
             const vector<int> &v2)
{
    return v1[0] < v2[0];
}
vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
{
    int qSize = queries.size();
    int pSize = points.size();
    vector<int> solution;
    sort(points.begin(), points.end(), sortcol);
    for (int i = 0; i < qSize; i++)
    {
        int maxValue = queries[i][2];
        int count = 0;
        int lo = 0;
        int hi = pSize - 1;
        int mid = -1;

        int j = 0;
        while (lo < hi)
        {
            mid = (lo + hi) / 2;
            if (points[mid][0] == queries[i][0] - queries[i][2])
            {
                break;
            }
            else if (points[mid][0] < queries[i][0] - queries[i][0])
            {
                hi = mid - 1;
            }
            else if (points[mid][0] > queries[i][0] - queries[i][0])
            {
                lo = mid + 1;
            }
        }
        for (int j = mid; points[j][0] <= queries[i][0] + queries[i][0]; j++)
        {
            int value = pow((points[j][0] - queries[i][0]), 2) + pow((points[j][1] - queries[i][1]), 2);
            if (value <= maxValue * maxValue)
            {
                count++;
            }
        }

        solution.push_back(count);
    }
    return solution;
}