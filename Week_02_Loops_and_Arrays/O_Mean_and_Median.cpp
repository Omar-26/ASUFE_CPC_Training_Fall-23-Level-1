#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(NULL));
    int tc, x, y;
    int nums[3];
    int size = sizeof(nums) / sizeof(int);
    cin >> tc;
    while (tc--)
    {
        cin >> x >> y;
        for (int i = -1000; i = 1000; i++)
        {
            for (int j = -1000; j <= 1000; j++)
                if ((3 * x - i - j >= -1000) && (3 * x - i - j <= 1000))
                {
                    nums[0] = i, nums[1] = j, nums[2] = 3 * x - i - j;
                }
            sort(nums, nums + size);
            if (nums[1] == y)
                break;
        }
        cout << nums[0] << " " << nums[1] << " " << nums[2] << endl;
    }
    return 0;
}