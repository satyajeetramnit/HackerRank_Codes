#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int h[26];
    for (int i = 0; i < 26; i++)
    {
        cin >> h[i];
    }
    string str;
    cin >> str;
    int m = 0;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (str[i] == a[j])
                m = max(m, h[j]);
        }
    }
    int area = m * str.size();
    cout << area << endl;
    return 0;
}
