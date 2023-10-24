#include <bits/stdc++.h>
#define el "\n"
using namespace std;
int main()
{
    int k;
    cin >> k;
    cout << 21 + k / 60 << ":";
    if ((k % 60) / 10 == 0)
        cout << "0";
    cout << k % 60;
    return 0;
}