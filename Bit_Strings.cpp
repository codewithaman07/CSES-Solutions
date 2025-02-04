#include <bits/stdc++.h>
using namespace std;

#define Aman() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
#define int long long
#define pb push_back
#define f(x,n) for(int i = x ; i<n ; i++)
#define all(x) x.begin(),x.end()
const int M = 1e9+7;
const int N = 1e6 + 1;

int mod_exp(int base, int exp, int mod){
    int res = 1;
    while(exp>0){
        if(exp%2 == 1) res = (res*base)%mod;
        base = (base*base)%mod;
        exp/=2;
    }
    return res;
}

void solve() {
    int n; cin>>n;
    cout<< mod_exp(2, n, M)<<endl;
}

signed main() {
    Aman();

    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}