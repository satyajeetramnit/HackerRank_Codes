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
    int t;
    cin >> t;
    while (t--)
    {
        int length;
        int consecutive;
        string number;
        cin >> length >> consecutive >> number;

        int best = 0;

        for (int start = 0; start + consecutive < length; start++)
        {
            int current = 1;

            for (int i = 0; i < consecutive; i++)               //converting ASCII -> Numbers
            { 
                current *= number[start + i] - '0';
            }

            best = best < current ? current : best;
        }

        cout << best << endl;
    }
    return 0;
}
