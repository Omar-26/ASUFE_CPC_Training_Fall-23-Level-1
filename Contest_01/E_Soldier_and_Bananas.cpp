#include <bits/stdc++.h>
#define el "\n"
using namespace std;
int main()
{
    int w, n, k, price = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        price += i * k;
    if (price <= n)
        cout << 0;
    else
        cout << (price - n) << el;
}