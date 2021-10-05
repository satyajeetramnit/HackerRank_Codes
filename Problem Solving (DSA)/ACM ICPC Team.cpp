#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    int final_count = 0;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int value = 0;
            for (int k = 0; k < m; k++)
            {
                if (v[i][k] == '1' || v[j][k] == '1')
                    value++;
            }
            if (final_count < value)
            {
                final_count = value;
                count = 1;
            }
            else if (final_count == value)
            {
                count++;
            }
        }
    }
    cout << final_count << endl
         << count << endl;
    return 0;
}
