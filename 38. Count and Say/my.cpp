#include <bits/stdc++.h>
using namespace std;
string countAndSay(int n)
{
    string start = "1";

    for (int i = 1; i < n; i++)
    {

        string temp;
        int count = 1;
        int n = start.size();
        for (int j = 0; j < n - 1; j++)
        {

            if (start[j] == start[j + 1])
            {

                count++;
            }
            else
            {

                temp += to_string(count) + start[j];
                count = 1;
            }
        }
        temp += to_string(count) + start[n - 1];
        start = temp;
    }
    return start;
}