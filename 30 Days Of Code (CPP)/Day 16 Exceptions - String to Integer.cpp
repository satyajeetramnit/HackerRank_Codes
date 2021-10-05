#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    try
    {
        string S;
        getline(cin, S);
        int num = stoi(S);
        cout << num;
    }

    catch (...)
    {
        cout << "Bad String";
    }
    return 0;
}
