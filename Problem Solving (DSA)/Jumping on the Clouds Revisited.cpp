#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int c[100];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    int energy = 100;
    for (int i = 0; i < n; i += k)
        energy -= 1 + c[i] * 2;
    cout << energy << endl;
}
