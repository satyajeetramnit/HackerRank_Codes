#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int game[n];
    for (int i = 0; i < n; i++)
    {
        cin >> game[i];
    }
    int max = game[0];
    int min = game[0];
    int index[2] = {0};
    for (int i = 1; i < n; i++)
    {
        if (game[i] > max)
        {
            index[0] += 1;
            max = game[i];
        }
        if (game[i] < min)
        {
            index[1] += 1;
            min = game[i];
        }
    }
    cout << index[0] << " " << index[1] << endl;
    return 0;
}
