#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> c(m);
    for (int i = 0; i < m; i++)
        cin >> c[i];
    sort(c.begin(), c.end());

    int maxm = 0;
    for (int i = 0; i <= c[0]; i++)
    {
        maxm = max(maxm, c[0] - i);
    }

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = c[i]; j <= c[i + 1]; j++)
        {
            maxm = max(maxm, min(j - c[i], c[i + 1] - j));
        }
    }

    for (int i = c[m - 1]; i < n; i++)
    {
        maxm = max(maxm, i - c[m - 1]);
    }
    cout << maxm << endl;
    return 0;

    // int n, m;
    // int maxi = 0;
    // cin >> n >> m;
    // vector<int> station(m);

    // for (int i = 0; i < m; i++)
    //     cin >> station[i];

    // sort(station.begin(), station.end());

    // for (int i = 0; i <= station[0]; i++)
    //     maxi = max(maxi, station[0] - i);

    // for (int i = 0; i < m - 1; i++)
    // {
    //     for (int j = station[i]; j <= station[i + 1]; j++)
    //     {
    //         maxi = max(maxi, min(j - station[i], station[i + 1] - j));
    //     }
    // }

    // for (int i = station[m - 1]; i < n; i++)
    //     maxi = max(maxi, i - station[m - 1]);

    // cout << maxi << endl;

    // return 0;
}
