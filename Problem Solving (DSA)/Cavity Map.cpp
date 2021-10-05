#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> grid(n);

    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    char **cavity = new char *[n];
    for (int i = 0; i < n; i++)
    {
        cavity[i] = new char[n];
        for (int j = 0; j < n; j++)
        {
            cavity[i][j] = grid[i][j];
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (grid[i][j] > grid[i - 1][j] && grid[i][j] > grid[i + 1][j] && grid[i][j] > grid[i][j - 1] && grid[i][j + 1] < grid[i][j])
            {
                cavity[i][j] = 'X';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << cavity[i][j];
        }
        cout << endl;
    }
    return 0;
}
