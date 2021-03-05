#include <bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle)
{
    int i, j, pos = -1, f = 0;
    if (needle.size() == 0)
    {
        return 0;
    }
    if (needle.size() > haystack.size())
        return -1;
    for (i = 0; i < haystack.size(); i++)
    {
        f = 0;
        if (haystack[i] == needle[0])
        {
            j = i + 1;

            while (haystack[j] == needle[j - i] && j - i < needle.size())
            {
                j++;
            }

            if (j - i == needle.size())
            {
                pos = i;

                return pos;
            }

            if (f)
                i = j - 2;
        }
    }
    return pos;
}
int main()
{
}