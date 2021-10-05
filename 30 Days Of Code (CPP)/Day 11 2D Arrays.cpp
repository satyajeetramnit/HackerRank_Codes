#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum[16];
    int h = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum[h] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            h++;
        }
    }
    int maxi = INT_MIN;
    for (int i = 0; i < 16; i++)
    {
        maxi = max(maxi, sum[i]);
    }
    cout << maxi << endl;
    return 0;
}
