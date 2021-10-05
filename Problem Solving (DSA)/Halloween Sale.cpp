#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, d, m, s;
    cin >> p >> d >> m >> s;
    int count = 0;
    while (s >= p)
    {
        s -= p;
        count++;
        p = (p - d) > m ? p - d : m;
    }
    cout << count << endl;
    return 0;
}
