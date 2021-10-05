#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                d1 += arr[i][j];
            }
        }
        d2 += arr[i][n - 1 - i];
    }
    cout << abs(d1 - d2) << endl;
    return 0;
}
