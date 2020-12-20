#include <bits/stdc++.h>
using namespace std;
string shortestPalindrome(string s)
{
    int n = s.size();
    string rev(s);
    reverse(rev.begin(), rev.end());
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.substr(0, n - i) == rev.substr(i))
            return rev.substr(0, i) + s;
    }
    return "";
}
int main()
{
    string s = "abdca";
    cout << shortestPalindrome(s);
}