#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> prime;
    prime.push_back(2);
    for (int i = 3; prime.size() <= 10001; i++)
    {
        bool isPrime = true;
        for (auto p : prime)
        {
            if (i % p == 0)
            {
                isPrime = false;
                break;
            }
            if (p * p > i)
            {
                break;
            }
        }
        if (isPrime)
        {
            prime.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n - 1 < prime.size())
        {
            cout << prime[n - 1] << endl;
        }
    }
    return 0;
}
