#include <bits/stdc++.h>
using namespace std;

void circularRotation(int arr[], int k, int n)
{
    while (k > 0)
    {
        int temp[n];
        for (int j = 0; j < n; j++)
        {
            temp[j] = arr[j];
        }
        for (int i = 1; i < n; i++)
        {
            arr[0] = temp[n - 1];
            arr[i] = temp[i - 1];
        }
        k--;
    }
}

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    k %= n;
    // circularRotation(arr, k, n);
    // int querry[q];
    // for (int i = 0; i < q; i++)
    // {
    //     cin >> querry[i];
    // }
    // for (int i = 0; i < q; i++)
    // {
    //     cout << arr[querry[i]] << endl;
    // }
    for (int i = 0; i < q; i++)
    {
        int b;
        cin >> b;
        cout << arr[(n - k + b) % n] << endl; // Calculate the new index for b
    }
    return 0;
}
