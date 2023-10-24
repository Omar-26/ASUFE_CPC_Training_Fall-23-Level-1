#include <bits/stdc++.h>
#define el "\n"
using namespace std;
int main()
{
    int n, m, moves;
    cin >> n >> m;
    if (n / m == 0)
        cout << -1;
    else
    {
        moves = ceil(n / 2.f);
        if (moves % m > 0)
            cout << moves + m - (moves % m);
        else
            cout << moves;
    }
    return 0;
}