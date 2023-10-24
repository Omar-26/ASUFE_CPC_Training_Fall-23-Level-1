#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, candies, M = 0, B = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        for (int j = 1; j <= n; j++)
        {
            cin >> candies;
            (candies & 1) ? B += candies : M += candies;
        }
        cout << ((M > B) ? "Yes\n" : "No\n");
        M = B = 0;
    }
}