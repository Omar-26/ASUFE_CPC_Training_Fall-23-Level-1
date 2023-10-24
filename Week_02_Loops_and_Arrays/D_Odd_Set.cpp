#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, num, even = 0, odd = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        for (int j = 1; j <= 2 * n; j++)
        {
            cin >> num;
            (num & 1) ? odd++ : even++;
        }
        cout << ((even == odd) ? "Yes\n" : "No\n");
        even = odd = 0;
    }
}