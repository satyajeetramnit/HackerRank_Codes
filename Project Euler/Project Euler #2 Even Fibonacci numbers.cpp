#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a = 1, b = 2, next, sum = 0;
        while (b <= n)
        {
            if (b % 2 == 0)
            {
                sum += b;
            }
            next = a + b;
            a = b;
            b = next;
        }
        cout << sum << endl;
    }
    return 0;
}
