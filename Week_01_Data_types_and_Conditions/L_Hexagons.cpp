#include <iostream>
#define el "\n"
using namespace std;
int main()
{
    long long  n;
    cin >> n;
    cout << 1 + n * (n + 1) * 6 / 2; // O(1)
    // while (n >= 0) time complexity O(n)
    // {
    //     affected += (n) * 6;
    //     n--;
    // }
    // cout << affected;
    return 0;
}