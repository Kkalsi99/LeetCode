#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    vector<int> sol;
    unsigned int i = 0, j = 0;
    double ret = 0;
    int k = 0;
    for (i = 0, j = 0; i < n1 || j < n2;)
    {
        if (i < n1 && j < n2)
        {
            if (nums1[i] < nums2[j])
            {
                sol.push_back(nums1[i++]);
            }
            else
            {
                sol.push_back(nums2[j++]);
            }
        }
        else if (i < n1 && j == n2)
            sol.push_back(nums1[i++]);
        else
        {
            sol.push_back(nums2[j++]);
        }
    }

    if ((n1 + n2) % 2 == 0)
    {
        ret = sol[(n1 + n2 - 2) / 2] + sol[(n1 + n2) / 2];
        return ret / 2;
    }
    else
    {
        ret = sol[(n1 + n2) / 2];
        return ret;
    }
}
int main()
{
    vector<int> nums1{1, 3};
    vector<int> nums2{2};
    cout << findMedianSortedArrays(nums1, nums2);
}