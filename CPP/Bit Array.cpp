// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// unsigned long long countDistinct(unsigned long long arr[], unsigned long long n){

//     unordered_set<unsigned long long> s;

//     unsigned long long res = 0;
//     for (int i = 0; i < n; i++) {

//         if (s.find(arr[i]) == s.end()) {
//             s.insert(arr[i]);
//             res++;
//         }
//     }

//     return res;
// }

int main()
{

    unsigned long long n, s, p, q, r = 0, ans = 0, returned, v;
    cin >> n >> s >> p >> q;
    unsigned long long i, a0 = s, a = s, ap = 0, k = 0, kt = 0;

    v = pow(2, 31);

    for (i = 0; i < n; i++)
    {
        a = (a * p + q);
        a = a % v;

        if ((a == a0 || a == ap) && i != 0)
        {
            k = i + 1;
            break;
        }
        ap = a;
    }
    if (i == n)
        k = i;

    cout << k << endl;

    // unsigned long long n,p,s,q;
    // cin>>n>>p>>s>>q;

    // unsigned long long a[n];

    // set<unsigned long long> S;

    // unsigned long long x = pow(2,31);

    // a[0] = s % x;
    // S.insert(a[0]);
    // for(unsigned long long i = 1; i < n; i++){
    //     a[i] = a[i-1] * p + q % x;

    //     S.insert(a[i]);
    // }

    // unsigned long long ans = S.size();
    // cout<<ans<<endl;

    // unsigned long long distinct_integers = 0;

    // sort(a, a + n);

    // for (unsigned long long i = 0; i < n; i++) {

    //     while (i < n - 1 && a[i] == a[i + 1])
    //         i++;

    //     distinct_integers++;
    // }

    // unsigned long long i,k=0,a,m=0;

    // for(i=0; i<n; i++){

    //     a=(a*p+q);
    //     a=a%x;

    //     if((a==s || a==m) && i!=0){
    //         k=i+1;
    //         break;
    //     }
    //     m=a;
    // }

    // if (i==n)
    // k=i;

    // cout <<k<<endl;

    // for (unsigned long long i = 1; i < n; i++) {
    //     unsigned long long j = 0;
    //     for (j = 0; j < i; j++){
    //         if (a[i] == a[j])
    //             break;
    //     }

    //     if (i == j)
    //         distinct_integers++;
    // }

    // cout<<countDistinct(a,n)<<endl;
    return 0;
}
