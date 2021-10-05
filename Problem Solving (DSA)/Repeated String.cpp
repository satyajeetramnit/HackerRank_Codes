#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long int n;
    cin >> n;
    long long int l = s.length();
    long long int t = n / l;
    long long int rem = n % l;
    int count = 0;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'a')
            count++;
    }
    int rem_count = 0;
    for (int i = 0; i < rem; i++)
    {
        if (s[i] == 'a')
            rem_count++;
    }
    long long int total = count * t + rem_count;
    cout << total << endl;
    return 0;
}
