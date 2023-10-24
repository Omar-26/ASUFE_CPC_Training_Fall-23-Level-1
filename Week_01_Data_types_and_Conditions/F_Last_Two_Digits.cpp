#include <iostream>
#define el "\n"
using namespace std;
int main()
{
    int N;
    cin >> N;
    if ((N % 100) / 10 == 0)
        cout << "0";
    cout << N % 100;
    return 0;
}