#include <bits/stdc++.h>
using namespace std;
int checkstack(string s)
{
    int maxLength = 0;
    int tempMaxLength = 0;
    vector<int> stack;
    for (auto x : s)
    {
        if (stack.empty() == 1 && x == ')')
        {
            if (maxLength < tempMaxLength)
            {
                maxLength = tempMaxLength;
            }
            tempMaxLength = 0;
        }
        else
        {
            if (x == '(')
            {
                stack.push_back(x);
            }
            if (stack.back() == '(' && x == ')')
            {
                stack.pop_back();
                tempMaxLength += 2;
            }
        }
        if (maxLength < tempMaxLength)
        {
            maxLength = tempMaxLength;
        }
    }
    return maxLength;
}

int longestValidParentheses(string s)
{
    int maxfromleft = checkstack(s);
    reverse(s.begin(), s.end());
    int maxfromright = checkstack(s);
    return min(maxfromleft, maxfromright);
}
