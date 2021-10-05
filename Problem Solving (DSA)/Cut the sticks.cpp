#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1";
        return 0;
    }
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int count = 1;
    cout << n << endl;
    int temp = n;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            temp -= count;
            cout << temp << endl;
            count = 1;
        }
        else
        {
            count++;
        }
    }

    return 0;
}
