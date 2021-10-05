#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int sum = 0;
        // for (int i = 1; i < n; i++)
        // {
        //     if (i % 3 == 0 || i % 5 == 0)
        //     {
        //         sum += i;
        //     }
        // }
        // cout << sum << endl;

        long long sum3, sum5, sum15;
        long long num3 = 3, num5 = 5, num15 = 15, i;

        long long vals[3] = {3, 5, 15};

        for (int i = 0; i < 3; i++)
        {
            long long x = (n - 1) / vals[i];
            vals[i] = ((vals[i] * x * (x + 1)) / 2);
        }
        cout << (vals[0] + vals[1] - vals[2]) << endl;
    }
    return 0;
}
