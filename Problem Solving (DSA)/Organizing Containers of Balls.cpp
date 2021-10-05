#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n][n];
        int sum[n] = {0};
        int row[n] = {0};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                sum[j] += arr[i][j];
                row[i] += arr[i][j];
            }
        }

        sort(row, row + n);
        sort(sum, sum + n);

        bool check = true;
        for (int i = 0; i < n; i++)
        {
            if (sum[i] != row[i])
            {
                check = false;
                break;
            }
        }
        if (check)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}
