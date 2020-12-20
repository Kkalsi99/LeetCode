#include <bits/stdc++.h>
using namespace std;
class sol
{
public:
    int count = 0;
    int checkPalindrome(string s, int i, bool twoDigit = 0)
    {
        int n = s.size();
        int l = i;
        int r = i + 1;

        if (twoDigit)
        {
            while (r <= n && l >= 0)
            {
                count++;
                if (s[l] == s[r])
                {
                    r++;
                    l--;
                }
                else
                {
                    break;
                }
            }
            return r - l - 1;
        }
        else
        {
            l = i - 1;

            while (r <= n && l >= 0)
            {
                count++;

                if (s[l] == s[r])
                {
                    r++;
                    l--;
                }
                else
                {
                    break;
                }
            }

            return r - l - 1;
        }
    }
    string longestPalindrome(string s)
    {
        int n = s.size();
        int start;
        int length = 0;
        string sol;

        for (int i = 0; i < n; i++)
        {
            count++;

            int temp = checkPalindrome(s, i);
            if (length < temp)
            {
                length = temp;
                start = i;
            }
            temp = checkPalindrome(s, i, 1);
            if (length < temp)
            {
                length = temp;
                start = i;
            }
        }

        if (length % 2 == 0)
        {
            start = start - length / 2 + 1;
        }
        else
        {

            start = start - length / 2;
        }

        for (int x = start; x < start + length; x++)
            sol = sol + s[x];
        cout << count;
        return sol;
    }
} h;
int main()
{
    string s = "aaaaaa";
    cout << h.longestPalindrome(s);
    cout << h.count;
}
