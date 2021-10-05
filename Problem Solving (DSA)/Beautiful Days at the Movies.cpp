#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int reverse = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    return reverse;
}

int beautifulDays(int i, int j, int k)
{
    int count = 0;
    for (int p = i; p < j; p++)
    {
        if (abs(p - (reverse(p))) % k == 0)
            count++;
    }
    return count;
}

int main()
{
    int i, j, k;
    cin >> i >> j >> k;
    cout << beautifulDays(i, j, k) << endl;
    return 0;
}
