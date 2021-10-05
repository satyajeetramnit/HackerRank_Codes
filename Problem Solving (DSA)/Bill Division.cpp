#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int bill[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> bill[i];
        sum += bill[i];
    }
    // cout<<sum;
    int actual = (sum - bill[k]) / 2;
    int charged;
    cin >> charged;
    if (actual == charged)
        cout << "Bon Appetit" << endl;
    else
        cout << charged - actual << endl;
    return 0;
}
