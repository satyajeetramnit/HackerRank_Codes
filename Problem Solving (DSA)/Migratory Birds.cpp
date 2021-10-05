// #include <bits/stdc++.h>

// using namespace std;

// int migratoryBirds(vector<int> arr)
// {
//     long int type[5] = {0};
//     for (long int i = 0; i < arr.size(); i++)
//     {
//         // arr[i]==1?type[0]++:(arr[i]==2?type[1]++:(arr[i]==3?type[1]++:(arr[i]==4?type[1]++:(arr[i]==5?type[1]++:cout<<"not a type of bird"))));
//         if (arr[i] == 1)
//             type[0]++;
//         if (arr[i] == 2)
//             type[1]++;
//         if (arr[i] == 3)
//             type[2]++;
//         if (arr[i] == 4)
//             type[3]++;
//         if (arr[i] == 5)
//             type[4]++;
//     }
//     int frequency = 1;
//     for (int i = 1; i < 5; i++)
//     {
//         if (type[i] > type[i - 1])
//             frequency = i + 1;
//     }
//     return frequency;
// }

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, t, frequency = 0;
    cin >> n;
    int types[5] = {};
    while (n--)
    {
        cin >> t;
        types[t - 1]++;
    }
    for (int i = 1; i < 5; i++)
    {
        if (types[i] > types[frequency])
            frequency = i;
    }
    cout << frequency + 1 << endl;
    return 0;
}
