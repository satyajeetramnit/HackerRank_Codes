#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int valley = 0;
    int level = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'U')
        {
            level++;
        }
        else
        {
            level--;
        }
        if (str[i] == 'U' && level == 0)
            valley++;
    }
    cout << valley << endl;
    return 0;
}
