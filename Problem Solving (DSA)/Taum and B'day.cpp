#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        unsigned long long int b, w, x, y, z;
        cin >> b >> w;
        cin >> x >> y >> z;

        if (x + z <= y)
        {
            cout << ((b + w) * x + w * z) << endl;
        }
        else if (y + z <= x)
        {
            cout << (b * z + (b + w) * y) << endl;
        }
        else
        {
            cout << (b * x + w * y) << endl;
        }
    }
    return 0;
}
