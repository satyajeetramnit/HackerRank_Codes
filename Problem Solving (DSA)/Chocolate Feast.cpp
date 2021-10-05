#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)             //while(t--)
    { 
        int n, c, m;
        cin >> n >> c >> m;
        int ans = n / c;
        int wrap = ans;

        while (wrap >= m)
        {
            wrap -= m;
            ans++;
            wrap++;
        }
        cout << ans << endl;
    }
}
