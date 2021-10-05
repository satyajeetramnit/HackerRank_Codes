#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    int hours = stoi(s.substr(0, 2));
    if (s[8] == 'A')
    {
        if (hours == 12)
            hours = 0;
    }
    else
    {
        if (hours == 12)
            hours = 12;
        else
            hours += 12;
    }
    return ((hours < 10) ? "0" : "") + to_string(hours) + s.substr(2, 6);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
