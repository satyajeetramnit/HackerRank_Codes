#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    int jump = 0;
    for (int i = 0; i < n; i++)
    {
        if (c[i + 2] == 0 && i + 2 < n)
        {
            jump++;
            i++;
        }

        else if (c[i + 1] == 0 && i + 1 < n)
        {
            jump++;
        }
    }
    cout << jump << endl;
    return 0;
}
