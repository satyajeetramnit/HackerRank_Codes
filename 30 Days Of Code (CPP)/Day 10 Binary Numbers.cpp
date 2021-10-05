#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int reminder = 0;
    int count = 0;
    int max_count = 0;

    while (n != 0)
    {
        reminder = n % 2;
        n = n / 2;

        if (reminder == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count > max_count)
        {
            max_count = count;
        }
    }
    cout << max_count;
    return 0;
}
