#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    int integer;
    long long long2;
    char character;
    float floatnumber;
    double doublenumber;
    cin >> integer >> long2 >> character >> floatnumber >> doublenumber;
    cout << integer << endl;
    cout << long2 << endl;
    cout << character << endl;
    cout << setprecision(10) << floatnumber << endl;
    cout << setprecision(10) << doublenumber << endl;
    return 0;
}
