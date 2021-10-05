#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string str = "NO";
    if (x1 > x2 && v1 < v2)
    {
        while (x1 >= x2)
        {
            if (x1 == x2)
            {
                str = "YES";
            }
            x1 += v1;
            x2 += v2;
        }
    }
    if (x1 < x2 && v1 > v2)
    {
        while (x1 <= x2)
        {
            if (x1 == x2)
            {
                str = "YES";
            }
            x1 += v1;
            x2 += v2;
        }
    }
    cout << str;
    return 0;
}
