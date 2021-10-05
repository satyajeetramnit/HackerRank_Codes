#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int total_problem;
    int special_problem = 0;
    int page = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> total_problem;
        page++;

        int problem = 1;
        while (total_problem--)
        {
            if (problem == page)
                special_problem++;
            if (problem % k == 0 && total_problem > 0)
                page++;

            problem++;
        }
    }
    cout << special_problem << endl;
    return 0;
}
