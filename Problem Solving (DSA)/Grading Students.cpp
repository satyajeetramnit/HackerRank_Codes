#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int grade[n];
    for (int i = 0; i < n; i++)
    {
        cin >> grade[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (grade[i] < 38)
        {
            cout << grade[i] << endl;
        }
        else
        {
            if ((5 - (grade[i] % 5)) < 3 && (5 - (grade[i] % 5)) > 0)
            {
                if ((grade[i] % 5) == 4)
                {
                    cout << grade[i] + 1 << endl;
                }
                else if ((grade[i] % 5) == 3)
                {
                    cout << grade[i] + 2 << endl;
                }
            }
            else
            {
                cout << grade[i] << endl;
            }
        }
    }
    return 0;
}
