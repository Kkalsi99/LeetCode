#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &height)
{
    int Area = 0;
    int i = 0;
    int j = height.size() - 1;
    while (i != j)
    {
        if (height[i] > height[j])
        {

            Area = max(Area, min(height[i], height[j]) * (j - i));
            j--;
        }
        else
        {

            Area = max(Area, min(height[i], height[j]) * (j - i));
            i++;
        }
    }
    return Area;
}
int main()
{
    vector<int> A = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea(A);
}
