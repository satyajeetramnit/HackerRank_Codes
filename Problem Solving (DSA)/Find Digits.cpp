#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int count = 0;
        int temp = n;
        while (temp > 0)
        {
            int d;
            d = temp % 10;
            if (d != 0 && n % d == 0)
            {
                count++;
            }
            temp /= 10;
        }
        cout << count << endl;
    }
    return 0;
}
