#include <bits/stdc++.h>
using namespace std;
vector<string> letterCombinations(string digits)
{
    vector<string> solution;
    vector<string> phone = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int n = 1;
    int x = 1;
    for (int j = 0; j < digits.length(); j++)
    {
        n = n * phone[digits[j] - '0'].length();
    }

    for (int j = 0; j < digits.length(); j++)
    {
        x = x * phone[digits[j] - '0'].length();
        for (int i = 0; i < x; i++)
        {
            for (int k = 0; k < n / x; k++)
            {

                if (j == 0)
                {

                    string a;
                    a.push_back(phone[digits[j] - '0'][i % phone[digits[j] - '0'].length()]);
                    solution.push_back(a);
                }

                else
                {
                    solution[i*n/x+k] = solution[i*n/x+k] + phone[digits[j] - '0'][i];
                }
            }
        }
    }

    return solution;
}
int main()
{
    letterCombinations("23");
}
