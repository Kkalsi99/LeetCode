#include <bits/stdc++.h>
using namespace std;
bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
    int count = 0;
    int size = flowerbed.size();
    if (size == 1)
    {
        if (flowerbed[0] == 0)
            return true;
    }

    for (int i = 0; i < size; i++)
    {

        if (i == 0)
        {
            if (flowerbed[i] == 0 && flowerbed[i + 1] == 0)
            {
                flowerbed[i] = 1;
                count++;
            }
        }
        else if (i == size - 1)
        {
            if (flowerbed[i] == 0 && flowerbed[i - 1] == 0)
            {
                flowerbed[i] = 1;
                count++;
            }
        }
        else
        {
            if (flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0)
            {
                flowerbed[i] = 1;
                count++;
            }
        }
        if (count == n)
            return true;
    }

    return count >= n;
}