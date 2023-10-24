#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
void solve ()
{
    int n , x , y; 
    string moves;
    cin >> n;
    x = y = 0 ;
    cin >> moves;
    for (int i = 0; i < n; i++)
    {
        switch (moves[i])
        {
        case 'U': y++; break;
        case 'D': y--; break;
        case 'R': x++; break;
        case 'L': x--; break;
        }
    if (x == 1 && y == 1)
    {
        cout << "Yes\n";
        return;
    }
    }
    cout << "No\n";
}