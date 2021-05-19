#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int> &nums, int k)
{

    int n = nums.size();
    map<int, int> sum_fq;
    int count = 0;
    int sum = 0;
    sum_fq[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum_fq.find(sum - k) != sum_fq.end())
        {
            count += sum_fq[sum];
        }
        sum_fq[sum]++;
    }
    return count;
}