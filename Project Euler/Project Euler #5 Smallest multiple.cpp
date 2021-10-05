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

int hcf(int a, int b)
{
    while (a != 0)
    {
        int c = a;
        a = b % a;
        b = c;
    }
    return b;
}

int lcm(int a, int b)
{
    return a * (b / hcf(a, b));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int smallest_multiple = 1;
        for (int i = 2; i <= n; i++)
        {
            smallest_multiple = lcm(smallest_multiple, i);
        }
        cout << smallest_multiple << endl;
    }
    return 0;
}
