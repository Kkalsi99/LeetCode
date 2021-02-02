#include <bits/stdc++.h>
using namespace std;
string intToRoman(int num)
{
    map<int, string> roman;
    string sol;
    roman[1] = "I";
    roman[4] = "IV";
    roman[5] = "V";
    roman[9] = "IX";
    roman[10] = "X";
    roman[40] = "XL";
    roman[50] = "L";
    roman[90] = "XC";
    roman[100] = "C";
    roman[400] = "CD";
    roman[500] = "D";
    roman[900] = "CM";
    roman[1000] = "M";
    int x, x_temp;

    for (int i = 0; num != 0; i++)
    {

        x = num % 10;
        x_temp = (pow(10, i));
        string temp;

        while ((x > 5 || x < 4) && x > 1 && x < 9)
        {

            temp = roman[x_temp] + temp;
            x--;
        }
        if (roman.find(x * x_temp) == roman.end())
        {

            if (x > 5)
            {
                x_temp = 5 * (pow(10, i));
                sol = roman[x_temp] + temp + sol;
            }
        }
        else
        {
            x_temp = x * (pow(10, i));
            sol = roman[x_temp] + temp + sol;
        }
        num = num / 10;
    }
    return sol;
}
int main()
{
    cout << intToRoman(9);
}