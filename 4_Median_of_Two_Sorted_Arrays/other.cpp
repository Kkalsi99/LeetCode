#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int m = nums1.size();
    int n = nums2.size();
    if (m > n)
    {
        nums1.swap(nums2);
        int tmp = m;
        m = n;
        n = tmp;
    }
    int imax = m;
    int imin = 0;
    while (imin <= imax)
    {
        int i = (imin + imax) / 2;

        int j = ((m + n + 1) / 2) - i;

        if (i < imax && nums2[j - 1] > nums1[i])
            imin = i + 1;
        else if (i > imin && nums1[i - 1] > nums2[j])
            imax = i - 1;
        else
        {
            int left;
            if (i == 0)
                left = nums2[j - 1];
            else if (j == 0)
                left = nums1[i - 1];
            else
            {
                left = max(nums1[i - 1], nums2[j - 1]);
            }
            if ((m + n) % 2 == 1)
                return left;
            int right;
            if (i == m)
                right = nums2[j];
            else if (j == n)
                right = nums1[i];
            else
            {
                right = min(nums1[i], nums2[j]);
            }

            return ((left + right) / 2.0);
        }
    }
    return 0.0;
}
int main()
{
    vector<int> nums1 = {1};

    vector<int> nums2 = {1};
    cout << findMedianSortedArrays(nums1, nums2);
}