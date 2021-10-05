#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int shared = 5;
    int cum = 0;
    int liked;
    for (int i = 0; i < n; i++)
    {
        liked = shared / 2;
        cum += liked;
        shared = liked * 3;
    }
    cout << cum << endl;
    return 0;
}
