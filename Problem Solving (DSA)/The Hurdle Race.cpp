#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m = max(m, arr[i]);
    }
    if (m >= k)
        m = m - k;
    else
        m = 0;
    cout << m << endl;
    return 0;
}
