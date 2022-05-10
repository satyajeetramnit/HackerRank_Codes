#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main() {
    faster;
    int t; 
    cin >> t;
    while(t--){
        int n, m; 
        cin>>n>>m;
        n++;
        m++;
        vector<vector<ll>> v(n, vector<ll>(m, 1));
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                v[i][j] = (v[i-1][j]+v[i][j-1])%mod;
            }
        }
        cout<<v[n-1][m-1]<<"\n";
    }
    return 0;
}
