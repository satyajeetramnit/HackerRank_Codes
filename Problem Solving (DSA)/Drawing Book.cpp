// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, p;
//     cin >> n >> p;
//     int s, l;
//     if ((n % 2 != 0 && (p == n || p == n - 1)) || (n % 2 == 0 && p == n) || p == 1)
//         cout << "0" << endl;
//     else
//     {
//         s = p / 2;
//         if (n % 2 != 0)
//             l = (n - p) / 2;
//         if (n % 2 == 0)
//             l = (n - p + 1) / 2;
//     }
//     cout << min(s, l) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

static int total_pages(const int &n)
{
    return (n + 2) / 2;
}

int main()
{

    int n, p;
    cin >> n >> p;

    int entire_book = total_pages(n);

    int from_front = total_pages(p) - 1;
    int from_back = entire_book - from_front - 1;

    cout << min(from_front, from_back) << endl;

    return 0;
}
