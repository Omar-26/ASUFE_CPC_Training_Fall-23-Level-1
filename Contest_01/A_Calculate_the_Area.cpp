#include <bits/stdc++.h>
#define el "\n"
using namespace std;
int main()
{
    int area, h, w;
    cin >> area;
    while (w = 1 + (rand() % area))
    {
        if (area % w == 0)
        {
            h = area / w;
            break;
        }
    }
    cout << h << " " << w;
}