#include <iostream>
#define el "\n"
using namespace std;
int main()
{
    int n, a, b, destination;
    cin >> n >> a >> b;
    b = b % n;
    if (b < 0)
        destination = n + a + b;
    else
        destination = a + b;
    if (destination % n == 0)
        cout << n;
    else
        cout << destination % n;
    return 0;
}