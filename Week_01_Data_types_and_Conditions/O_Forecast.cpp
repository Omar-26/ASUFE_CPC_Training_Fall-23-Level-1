#include <bits/stdc++.h>
// #include <cmath>
#define el "\n"
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    float opti, pessi;
    opti = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    pessi = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    if (a < 0)
        printf("%.15f \n%.15f ", pessi, opti);
    else
        printf("%.15f \n%.15f ", opti, pessi);
    // printf("%.15f \n%.15f ", max(opti, pessi), min(opti, pessi));
    return 0;
}