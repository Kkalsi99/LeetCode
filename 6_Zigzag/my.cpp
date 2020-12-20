#include <bits/stdc++.h>
using namespace std;
string convert(string s, int numRows)
{
    string sol[numRows];
    string sol1;

    int n = s.size();
    int i = 0, temp = 0, x = 0;
    bool down = false;
    while (n != temp)
    {
        i = i % numRows;
        if (!i)
        {
            down = !down;
        }
        if (down)
        {

            sol[i] = sol[i] + s[temp];
        }
        else
        {
            if (!i)
                i = i + 2;

            sol[numRows - i] = sol[numRows - i] + s[temp];
        }

        i++;
        temp++;
    }
    for (int i = 0; i < numRows; i++)
    {
        sol1 = sol1 + sol[i];
    }
    return sol1;
}
int main()
{
    string s = "PAYPALISHIRING";
    cout << convert(s, 4);
}