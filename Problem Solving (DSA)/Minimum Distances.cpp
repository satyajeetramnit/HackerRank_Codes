#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min_count = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && j - i < min_count)
            {
                min_count = j - i;
            }
        }
    }
    if (min_count == INT_MAX)
        cout << "-1" << endl;
    else
        cout << min_count << endl;
    return 0;
}
