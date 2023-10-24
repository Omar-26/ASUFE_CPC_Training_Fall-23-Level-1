#include <bits/stdc++.h>
// #include <cmath>
#define el "\n"
using namespace std;
int main()
{
    long n, m;
    cin >> n >> m;
    cout << (n + m - 1) - min(n, m) << " " << min(n, m) << endl;
}