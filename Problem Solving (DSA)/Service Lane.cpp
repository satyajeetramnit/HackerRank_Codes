#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int width[n];
    for (int i = 0; i < n; i++)
    {
        cin >> width[i];
    }
    while (t--)
    {
        int enter, exit;
        cin >> enter >> exit;
        int max = width[enter];
        for (int j = enter; j <= exit; j++)
        {
            if (max > width[j])
                max = width[j];
        }
        cout << max << endl;
    }
    return 0;
}
