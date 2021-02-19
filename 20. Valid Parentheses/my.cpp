#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    vector<char> stack = {};

    for (auto x : s)
    {
        if (stack.empty() && (x == ')' || x == '}' || x == ']'))
        {
            return 0;
        }
        if (x == '(' || x == '{' || x == '[')
        {
            stack.push_back(x);
        }

        else if (!stack.empty())
        {

            if (stack.back() == '(' && x == ')')
            {
                stack.pop_back();
            }
            else if (stack.back() == '{' && x == '}')
            {
                stack.pop_back();
            }
            else if (stack.back() == '[' && x == ']')
            {
                stack.pop_back();
            }
            else
                return 0;
        }
    }
    return stack.empty();
}
int main()
{
    string s = "]";
    cout << isValid(s);
}