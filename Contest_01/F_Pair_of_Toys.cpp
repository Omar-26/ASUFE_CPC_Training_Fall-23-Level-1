#include <bits/stdc++.h>
#define el "\n"
#define ll long long
using namespace std;
int main()
{
    ll n, k, first, second;
    cin >> n >> k;
    ll L = max(k - n, 1LL), R = (k - 1) / 2;
    cout << max(R - L + 1, 0LL) << "\n";
    cout << 1LL;
    // int count = 0;
    // while (first = 1 + (rand() % k))
    // {
    //     second = k - first;
    //     if ((first != second))
    //     {
    //         count++;

    //     }
    // }
}