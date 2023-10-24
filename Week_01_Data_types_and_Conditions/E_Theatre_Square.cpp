#include <bits/stdc++.h>
#define el "\n"
using namespace std;
int main()
{
    long long n, m, a, c, d;
    cin >> n >> m >> a;
    if (n % a != 0)
    {
        if (m % a != 0)
        {
            c = (m / a) + 1;
            d = (n / a) + 1;
        }
        else
        {
            c = (m / a);
            d = (n / a) + 1;
        }
    }
    else
    {
        if (m % a != 0)
        {
            c = (m / a) + 1;
            d = (n / a);
        }
        else
        {
            c = (m / a);
            d = (n / a);
        }
    }
    cout << c * d;
    return 0;
}