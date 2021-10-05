#include <bits/stdc++.h>
using namespace std;

int main()
{
    // long long int t;
    // cin >> t;
    // for (long long int i = 0; i < t; i++)
    // {
    //     long long int s, l;
    //     cin >> s >> l;
    //     long long int count = 0;
    //     for (long long int j = s; j <= l / 2; j++)
    //     {
    //         for (long long int k = j; k <= l; k++)
    //         {
    //             if (j * j == k)
    //                 count++;
    //         }
    //     }
    //     cout << count << endl;
    // }
    // return 0;

    long long t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        long long r = (long long)sqrt(b) - (long long)sqrt(a);

        if (sqrt(a) - (long)sqrt(a) == 0)
            r++;
        cout << r << endl;
    }
    return 0;
}
