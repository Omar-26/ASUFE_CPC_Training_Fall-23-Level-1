#include <iostream>
#define el "\n"
using namespace std;
int main()
{
    int s, t;
    float x;
    cin >> s >> t >> x;
    if (s == 0)
        s = 24;
    if (t == 0)
        t = 24;
    x += 0.5;
    if (s < t)
    {
        cout << ((x >= s && x < t) ? "Yes" : "No");
    }
    else
    {
        cout << ((x < t || s <= x) ? "Yes" : "No");
    }
}
