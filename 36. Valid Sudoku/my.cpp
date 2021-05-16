#include <bits/stdc++.h>
using namespace std;
bool isValidSudoku(vector<vector<char>> &board)
{
    unordered_map<int, unordered_map<char, bool>> sq;

    for (int i = 0; i <= 8; i++)
    {
        unordered_map<char, bool> hor, ver;

        for (int j = 0; j < 9; j++)
        {
            int box = (i / 3) * 3 + j / 3;
            if (hor.find(board[i][j]) != hor.end())
            {
                cout << hor[board[i][j]];
                cout << i << j;
                return 0;
            }
            if (ver.find(board[j][i]) != ver.end())
            {
                cout << ver[board[j][i]];
                cout << i << j;
                return 0;
            }
            if (sq[box].find(board[i][j]) != sq[box].end())
            {
                return 0;
            }
            if ((board[i][j] > 47 && board[i][j] < 58))
            {
                hor[board[i][j]] = 1;
                sq[box][board[i][j]] = 1;
            }
            if ((board[j][i] > 47 && board[j][i] < 58))
            {
                ver[board[j][i]] = 1;
            }
        }
    }

    return 1;
}