#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        int flag = 1;
        for (int j = 0; j < m; j++)
        {
            if (i % a[j] != 0)
                flag = 0;
        }
        for (int j = 0; j < n; j++)
        {
            if (b[j] % i != 0)
                flag = 0;
        }
        if (flag)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
