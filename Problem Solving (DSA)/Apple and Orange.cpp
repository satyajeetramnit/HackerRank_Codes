#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, t;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    int m, n;
    cin >> m >> n;
    int apple[m];
    for (int i = 0; i < m; i++)
    {
        cin >> apple[i];
    }
    int orange[n];
    for (int i = 0; i < n; i++)
    {
        cin >> orange[i];
    }
    for (int i = 0; i < m; i++)
    {
        apple[i] += a;
    }
    for (int i = 0; i < n; i++)
    {
        orange[i] += b;
    }
    int ap = 0;
    int orn = 0;
    for (int i = 0; i < m; i++)
    {
        if (apple[i] >= s && apple[i] <= t)
            ap++;
    }
    for (int i = 0; i < n; i++)
    {
        if (orange[i] >= s && orange[i] <= t)
            orn++;
    }
    cout << ap << "\n"
         << orn << endl;
    return 0;
}
