#include <bits/stdc++.h>
using namespace std;

// bool check(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

int main()
{
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int i = 0;
    int odd = 0;
    int p = 0;
    int q = 0;

    while (i < n)
    {
        if (b[i] % 2 != 0)
        {
            odd++;
            i++;

            if (odd % 2 == 0)
            {
                q += ++p;
                p = 0;
            }

            while ((b[i] % 2 == 0) && (i < n) && (odd % 2 != 0))
            {
                p++;
                i++;
            }
        }
        else
            i++;
    }

    if (odd % 2 == 0)
        cout << 2 * q << endl;
    else
        cout << "NO" << endl;
    return 0;
}
