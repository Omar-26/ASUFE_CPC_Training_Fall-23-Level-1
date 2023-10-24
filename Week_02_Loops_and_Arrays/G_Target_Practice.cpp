#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc, score = 0;
    cin >> tc;
    char target;
    int grid[10][10]{
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    while (tc--)
    {
        score = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> target;
                if (target == 'X')
                {
                    score += grid[i][j];
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}
// {
//     int tc, score = 0;
//     cin >> tc;
//     char target;
//     while (tc--)
//     {
//         score = 0;
//         for (int i = 0; i < 10; i++)
//             for (int j = 0; j < 10; j++)
//             {
//                 cin >> target;
//                 if (target == '.')
//                     continue;
//                 else if (target == 'X')
//                 {
//                     if (((i == 0 || i == 9) && (j >= 0 && j <= 9)) || ((j == 0 || j == 9) && (i >= 0 && i <= 9)))
//                     {
//                         score++;
//                     }
//                     else if (((i == 1 || i == 8) && (j >= 1 && j <= 8)) || ((j == 1 || j == 8) && (i >= 1 && i <= 8)))
//                     {
//                         score += 2;
//                     }
//                     else if (((i == 2 || i == 7) && (j >= 2 && j <= 7)) || ((j == 2 || j == 7) && (i >= 2 && i <= 7)))
//                     {
//                         score += 3;
//                     }
//                     else if (((i == 3 || i == 6) && (j >= 3 && j <= 6)) || ((j == 3 || j == 6) && (i >= 3 && i <= 6)))
//                     {
//                         score += 4;
//                     }
//                     else if (((i == 4 || i == 5) && (j >= 4 && j <= 5)) || ((j == 4 || j == 5) && (i >= 4 && i <= 5)))
//                     {
//                         score += 5;
//                     }
//                 }
//             }
//         cout << score << endl;
//     }
//     return 0;
// }