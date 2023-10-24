#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, x, ta = 0, ao = 0;
    cin >> a >> b >> c >> d >> e >> f >> x;
    for (int k = 0; k < x; k++)
    {
        if (k % (a + c) < a)
        {
            ta += b;
        }
        if (k % (d + f) < d)
        {
            ao += e;
        }
    }
    if (ta > ao)
    {
        cout << "Takahashi" << endl;
    }
    else if (ta < ao)
    {
        cout << "Aoki" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }

    return 0;
}
// int distance(int secondsWalked, int metersWalked, int secondsRest, int x)
// {
//     int meters = x / secondsWalked;
//     x -= meters * secondsWalked;
//     int rest = x / secondsRest;
//     x -= rest * secondsRest;
//     int distanceWalked = (meters + x) * metersWalked;
//     return distanceWalked;
// }
// int main()
// {
//     int a, b, c, d, e, f, x;
//     cin >> a >> b >> c >> d >> e >> f >> x;
//     int tDist = distance(a, b, c, x);
//     int aDist = distance(d, e, f, x);
//     if (tDist > aDist)
//         cout << "Takahashi";
//     else if (tDist < aDist)
//         cout << "Aoki";
//     else
//         cout << "Draw";
// }