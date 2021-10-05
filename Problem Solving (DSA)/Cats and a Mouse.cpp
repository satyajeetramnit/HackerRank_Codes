#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    int arr[q][3];
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int diffA, diffB;
    for (int i = 0; i < q; i++)
    {
        diffA = arr[i][2] - arr[i][0];
        diffB = arr[i][2] - arr[i][1];
        if (diffA < 0)
            diffA *= -1;
        if (diffB < 0)
            diffB *= -1;
        if (diffA < diffB)
            cout << "Cat A" << endl;
        if (diffB < diffA)
            cout << "Cat B" << endl;
        if (diffA == diffB)
            cout << "Mouse C" << endl;
    }
    return 0;
}
