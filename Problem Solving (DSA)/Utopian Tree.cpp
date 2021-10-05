#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    for (int i = 0; i < n; i++)
    {
        int h = 1;
        for (int j = 0; j < t[i]; j++)
        {
            if (j == 0)
                h = 1;
            if (j % 2 == 1)
                h++;
            if (j % 2 == 0)
                h *= 2;
        }
        cout << h << endl;
    }
    return 0;
}
