#include <bits/stdc++.h>
#define el "\n"
using namespace std;
int main()
{
    int found = false;
    long long a, b, c;
    cin >> a >> b >> c;
    if (c == 0)
    {
        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        if ((b - a) % c == 0 && (b - a) / c >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    // if (!(b >= a) && c >= 0)
    // {
    //     cout << "NO";
    //     return 0;
    // }
    // if (c == 0 && (a != b))
    // {
    //     cout << "NO";
    //     return 0;
    // }
    // for (int i = a; i <= 1000000000; i += c)
    //     if (i == b)
    //     {
    //         found = true;
    //         break;
    //     }
    // if (found)
    //     cout << "YES";
    // else
    //     cout << "NO";
}